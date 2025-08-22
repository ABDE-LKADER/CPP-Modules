# include "PmergeMe.hpp"

int main( int ac, char **av ) {
	if (ac < 2) {
		std::cerr << "Error: No input sequence." << std::endl;
		return EXIT_FAILURE;
	}

	int						num;
	vec						initSequence;
	std::istringstream		numStream;

	for (int na = 1; na < ac; na++) {
		numStream.str(av[na]);
		if (!(numStream >> num) || !numStream.eof() || num < 0) {
			std::cout << "Error\n";
			return EXIT_FAILURE;
		}
		initSequence.push_back(std::vector<int>(1, num));
		numStream.clear();
	}

	PmergeMe		sorter(initSequence);

	return EXIT_SUCCESS;
}
