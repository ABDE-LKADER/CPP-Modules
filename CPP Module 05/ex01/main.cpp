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
		std::cerr << e.what() << std::endl;
	}
	catch ( ... ) {
		std::cerr << "Error Catched :D" << std::endl;
	}
}
