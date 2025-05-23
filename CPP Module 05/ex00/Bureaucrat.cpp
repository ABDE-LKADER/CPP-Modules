# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Anonymous") {
	std::srand(std::time(0));
	grade = std::rand() % 150 + 1;
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) { *this = obj; }

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &obj ) {
	name = obj.name;
	grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) { }

Bureaucrat::Bureaucrat( const std::string &nam , short num ) : name(nam), grade(num) {
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	if (grade > MIN_GRADE)
		throw GradeTooLowException();
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

int	Bureaucrat::getGrade( void ) const {
	return (grade);
}
