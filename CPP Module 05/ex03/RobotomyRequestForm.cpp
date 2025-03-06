# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: AForm("Robot", 72, 45), target("default") { }

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj )
	: AForm(obj), target(obj.target) { *this = obj; }

RobotomyRequestForm::~RobotomyRequestForm( void ) { }

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm &obj ) {
	if (this != &obj) {
		AForm::operator=(obj);
		target = obj.target;
	} return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( const std::string &name )
	: AForm("Robot", 72, 45), target(name) { }

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const {
	if (getStatus() == false)
		throw NotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();

	std::cout << "Zzzzt! Crack! Whirr... Processing... 🤖\n";
	if (genGrade() % 2)
		std::cout << target << " has been robotomized successfully!\n";
	else
		std::cout << "Robotomy failed on " << target << ".\n";
}
