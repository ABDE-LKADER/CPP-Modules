# include "Intern.hpp"

Intern::Intern( void ) { }

Intern::Intern( const Intern &obj ) { *this = obj; }

Intern&	Intern::operator=( const Intern &obj ) { (void) obj; return (*this); }

Intern::~Intern( void ) { }

AForm*	MakeShrubberyCreation( const std::string &target ) {
	return (new ShrubberyCreationForm(target));
}

AForm*	MakeRobotomyRequest( const std::string &target ) {
	return (new RobotomyRequestForm(target));
}

AForm*	MakePresidentialPardon( const std::string &target ) {
	return (new PresidentialPardonForm(target));
}

const char*	Intern::InvalidFormException::what() const throw() {
	return ("Error: Form creation failed!");
}

AForm*	Intern::makeForm( const std::string &name , const std::string &target ) {
	FormType	fomrs[] = {
		{"shrubbery creation", MakeShrubberyCreation},
		{"robotomy request", MakeRobotomyRequest},
		{"presidential pardon", MakePresidentialPardon},
	};
	for (short index = 0; index < 3; index++) {
		if (fomrs[index].name == name) {
			std::cout << "Intern creates " << target << std::endl;
			return (fomrs[index].form(target));
		}
	}
	throw	InvalidFormException();
}
