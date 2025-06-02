# include "iter.hpp"

int	main( void ) {
	int				numbers[2] = {1, 2};
	std::string		strings[2] = {"FIRST", "SECOND"};
	const double	nums[2] = {42.0, 1337.0};

	std::cout << "--- Ints ---" << std::endl;
	iter(numbers, 2, printIt<int>);
	
	std::cout << "--- double ---" << std::endl;
	iter(nums, 2, printIt<double>);

	std::cout << "--- strings ---" << std::endl;
	iter(strings, 2, printIt<std::string>);
}
