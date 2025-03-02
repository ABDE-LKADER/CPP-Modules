# include "Form.hpp"
# include "Bureaucrat.hpp"

short	genGrade( void )
{
	std::srand(std::time(0));
	return (std::rand() % 150 + 1);
}

Form::Form( void ) : name("Form"), approved(false),
	signGrade(genGrade()), execGrade(genGrade()) { }

Form::Form( const Form &obj ) : name(obj.name), approved(obj.approved),
	signGrade(obj.signGrade), execGrade(obj.execGrade) { *this = obj; }

Form&	Form::operator=( const Form &obj ) {
	if (this != &obj)
		approved = obj.approved;
	return (*this);
}

Form::~Form( void ) { }

void	Form::beSigned( const Bureaucrat &obj ) {
	if (approved == true)
		throw AlreadySignedException();
	if (obj.getGrade() > getSingGrade())
		throw GradeTooLowException();
	approved = true;
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char*	Form::AlreadySignedException::what() const throw() {
	return ("is already signed!");
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

short	Form::getSingGrade( void ) const {
	return (signGrade);
}

short	Form::getExecGrade( void ) const {
	return (execGrade);
}
