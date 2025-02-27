# include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat	bur;
		std::cout << bur;
	}
	catch ( std::exception &e ) {
		std::cout << "Error Catched ;D" << std::endl;
	}
	catch ( ... ) {
		std::cout << "Error Catched :D" << std::endl;
	}
}
