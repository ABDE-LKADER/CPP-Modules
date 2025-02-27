# include "Bureaucrat.hpp"

int main( void ) {
	try {
		Bureaucrat	two;
		std::cout << two;

		Bureaucrat	on("Muslim", 1);
		std::cout << on;

		Bureaucrat	one("Problem", 150);
		one--;
		std::cout << one;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	catch ( ... ) {
		std::cout << "Error Catched :D" << std::endl;
	}
}
