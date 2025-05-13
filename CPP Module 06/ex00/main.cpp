# include "ScalarConverter.hpp"

int main( int ac, char **av ) {
	if (ac != 2) {
		std::cerr << YELLOW "Usage: " RESET "./ScalarConverter "
			RED "<value>" RESET << std::endl;
		return EXIT_FAILURE;
	}
	try {
		ScalarConverter::convert(av[1]);
	} catch( const std::exception& e ) {
		std::cerr << RED "[Error]: " BOLD << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
