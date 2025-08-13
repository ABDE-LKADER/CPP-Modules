# include "RPN.hpp"

int	main( int ac, char **av ) {	
	try {
		if (ac != 2)
			throw std::runtime_error("Error");

		std::istringstream	expression(*(++av));
		std::cout << RPN::calculate(expression) << std::endl;
	}

	catch( const std::exception& e ) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}
