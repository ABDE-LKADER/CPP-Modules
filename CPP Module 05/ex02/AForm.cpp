# include "AForm.hpp"
# include "Bureaucrat.hpp"

short	genGrade( void )
{
	std::srand(std::time(0));
	return (std::rand() % 150 + 1);
}

AForm::AForm( void ) : name("Blank"), isSigned(false),
	signGrade(genGrade()), execGrade(genGrade()) { }

AForm::AForm( const AForm &obj ) : name(obj.name), isSigned(obj.isSigned),
	signGrade(obj.signGrade), execGrade(obj.execGrade) { *this = obj; }

AForm::~AForm( void ) { }

AForm&	AForm::operator=( const AForm &obj ) {
	if (this != &obj)
		isSigned = obj.isSigned;
	return (*this);
}

AForm::AForm( const std::string &nam , short sign, short exec ) : name(nam),
	isSigned(false), signGrade(sign), execGrade(exec) {
	if (sign < MAX_GRADE || exec < MAX_GRADE)
		throw GradeTooHighException();
	if (sign > MIN_GRADE || exec > MIN_GRADE)
		throw GradeTooLowException();
}

void	AForm::beSigned( const Bureaucrat &obj ) {
	if (isSigned == true)
		throw AlreadySignedException();
	if (obj.getGrade() > getSingGrade())
		throw GradeTooLowException();
	isSigned = true;
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char*	AForm::AlreadySignedException::what() const throw() {
	return ("is already signed!");
}

const char*	AForm::NotSignedException::what() const throw() {
	return ("is not signed!");
}

std::ostream&	operator<<(std::ostream& out, const AForm& form) {
	out << "\n\t+----------------------------------------------+" << "\n"
		<< "\t|               Form Information               |" << "\n"
		<< "\t+----------------------------------------------+" << "\n";

	out << "\t| " << std::setw(20) << std::left << "Form Name:"
		<< "\t| " << std::setw(20) << std::right << form.getName() << " |" << "\n";

	out << "\t| " << std::setw(20) << std::left << "Signed:"
		<< "\t| " << std::setw(20) << std::right << (form.getStatus() ? "Yes" : "No") << " |" << "\n";

	out << "\t| " << std::setw(20) << std::left << "Grade to Sign:"
		<< "\t| " << std::setw(20) << std::right << form.getSingGrade() << " |" << "\n";
	
	out << "\t| " << std::setw(20) << std::left << "Grade to Execute:"
		<< "\t| " << std::setw(20) << std::right << form.getExecGrade() << " |" << "\n";

	out << "\t+----------------------------------------------+" << "\n\n";

	return (out);
}

std::string	AForm::getName( void ) const {
	return (name);
}

bool	AForm::getStatus( void ) const {
	return (isSigned);
}

short	AForm::getSingGrade( void ) const {
	return (signGrade);
}

short	AForm::getExecGrade( void ) const {
	return (execGrade);
}
