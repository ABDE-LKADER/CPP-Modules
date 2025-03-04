# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main( void ) {
	try {
		Bureaucrat					muslim("Muslim", 6);
		ShrubberyCreationForm		shrubbery("Shrubbery");
		RobotomyRequestForm			robot("Robot");
		PresidentialPardonForm		president("President");

		std::cout << muslim;

		shrubbery.beSigned(muslim);
		std::cout << shrubbery;
		shrubbery.execute(muslim);

		muslim.signForm(robot);
		std::cout << robot;
		muslim.executeForm(robot);

		muslim.signForm(president);
		std::cout << president;
		muslim.executeForm(president);

		president.beSigned(muslim);
		std::cout << president;
		president.execute(muslim);
	}
	catch ( std::exception &e ) {
		std::cerr << "> " << e.what() << std::endl;
	}
	catch ( ... ) {
		std::cerr << "Error Catched :D" << std::endl;
	}
}
