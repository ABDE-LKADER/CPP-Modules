# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Anonymous"), grade(genGrade()) { }

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) { *this = obj; }

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &obj ) {
	name = obj.name, grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) { }

Bureaucrat::Bureaucrat( const std::string &nam , short num ) : name(nam), grade(num) {
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	if (grade > MIN_GRADE)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm( AForm &form ) {
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << ".\n";
	}
	catch( AForm::AlreadySignedException	&e ) {
		std::cout << getName() << " couldn't sign " << form.getName()
				  << " because " << e.what() << ".\n";
	}
	catch( AForm::GradeTooLowException	&e ) {
		std::cout << getName() << " couldn't sign " << form.getName()
				  << " because " << e.what() << ".\n";
	}
}

void	Bureaucrat::executeForm(AForm const &form ) {
	try {
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << ".\n";
	}
	catch( AForm::GradeTooLowException	&e ) {
		std::cout << getName() << " couldn't execute " << form.getName()
				  << " because " << e.what() << ".\n";
	}
	catch( AForm::NotSignedException	&e ) {
		std::cout << getName() << " couldn't execute " << form.getName()
				  << " because " << e.what() << ".\n";
	}
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: Grade is too low.");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Grade is too high.");
}

Bureaucrat	Bureaucrat::operator++( int ) {
	Bureaucrat	Res;

	if (grade == MAX_GRADE)
		throw GradeTooHighException();
	Res.grade = grade--;
	return (Res);
}

Bureaucrat	Bureaucrat::operator--( int ) {
	Bureaucrat	Res;

	if (grade == MIN_GRADE)
		throw GradeTooLowException();
	Res.grade = grade++;
	return (Res);
}

std::ostream&	operator<<( std::ostream &out , const Bureaucrat &obj ) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (out);
}

std::string	Bureaucrat::getName( void ) const {
	return (name);
}

short	Bureaucrat::getGrade( void ) const {
	return (grade);
}
