# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: AForm("President", 25, 5), target("default") { }

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj )
	: AForm(obj), target(obj.target) { *this = obj; }

PresidentialPardonForm::~PresidentialPardonForm( void ) { }

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm &obj ) {
	if (this != &obj) {
		AForm::operator=(obj);
		target = obj.target;
	} return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( const std::string &name )
	: AForm("President", 25, 5), target(name) { }

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {
	if (getStatus() == false)
		throw NotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();

	std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}
