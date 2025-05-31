# include "iter.hpp"

int	main( void ) {
	int				numbers[2] = {1, 2};
	std::string		strings[2] = {"FIRST", "SECOND"};

	std::cout << "--- Ints ---" << std::endl;
	iter(numbers, 2, printIt);

	std::cout << "--- strings ---" << std::endl;
	iter(strings, 2, printIt);
}
