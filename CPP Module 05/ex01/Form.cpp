# include "Form.hpp"

Form::Form( void ) : name("Form"),
	signGrade(0), execGrade(0) { }

Form::Form( const Form &obj ) : name("Form"),
	signGrade(0), execGrade(0) { *this = obj; }

Form&	Form::operator=( const Form &obj ) {
	approved = obj.approved;
	return (*this);
}

Form::~Form( void ) { }

void	Form::beSigned( const Bureaucrat &obj ) {
	if (obj.getGrade() > this->getSingGrade())
		throw GradeTooLowException();
	approved = true;
}

std::ostream&	operator<<( std::ostream &out , const Form &obj ) {
	(void) obj;
	out << ".\n";
	return (out);
}

std::string	Form::getName( void ) const {
	return (name);
}

bool	Form::getStatus( void ) const {
	return (approved);
}

int	Form::getSingGrade( void ) const {
	return (signGrade);
}

int	Form::getExecGrade( void ) const {
	return (execGrade);
}
