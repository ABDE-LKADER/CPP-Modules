# include "PmergeMe.hpp"

int main( int ac, char **av ) {
	if (ac < 2) {
		std::cerr << RED BOLD << "Error: " << RESET
				  <<  "No input sequence." << std::endl;
		return EXIT_FAILURE;
	}

	int						num;
	vecMatrix				numbersV;
	listMatrix				numbersL;
	std::istringstream		numStream;

	for (int na = 1; na < ac; na++) {
		numStream.str(av[na]);
		if (!(numStream >> num) || !numStream.eof() || num < 0) {
			std::cout << RED BOLD << "Error\n" << RESET;
			return EXIT_FAILURE;
		}
		numbersV.push_back(vec(1, num));
		numbersL.push_back(list(1, num));
		numStream.clear();
	}

	PmergeMe::run(numbersV, true);
	PmergeMe::run(numbersL, false);

	return EXIT_SUCCESS;
}
