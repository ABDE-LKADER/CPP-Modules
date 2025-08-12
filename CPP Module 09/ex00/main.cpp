# include "BitcoinExchange.hpp"

int main( int ac, char **av ) {
	try {
		if (ac != 2)
			throw std::runtime_error("Usage: ./btc <input_file>");

		BitcoinExchange btc;
		btc.processToExchange(av[1]);

	} catch ( const std::exception& e ) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
