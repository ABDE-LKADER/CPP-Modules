# include "Bureaucrat.hpp"

int main( void ) {
	try {
		Bureaucrat	muslim("Muslim", 1);
		Form		nikaah("Nikaah Contract", 4, 1);

		muslim.signForm(nikaah);

		std::cout << muslim;
		std::cout << nikaah;

		try {
			Form	haram("Haram Contract", 150, 151);

			std::cout << haram;
			muslim.signForm(haram);
		}
		catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
			std::cout << "> Deep Reason: It's Haram!!" << std::endl;
		}
		muslim.signForm(nikaah);
		std::cout << "> Deep Reason: Already 4 Nikaah Contract in Signed!!" << std::endl;
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	catch ( ... ) {
		std::cerr << "Error Catched :D" << std::endl;
	}
}
