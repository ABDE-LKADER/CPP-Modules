# include "Intern.hpp"
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main( void ) {
	try {
		Bureaucrat	muslim("Muslim", 1);

		std::cout << muslim;

		Intern randomIntern;
		AForm* random = randomIntern.makeForm("robotomy request", "Bender");

		muslim.signForm(*random);
		std::cout << *random;
		muslim.executeForm(*random);

		delete random;
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	catch ( ... ) {
		std::cerr << "Error Catched :D" << std::endl;
	}
}
