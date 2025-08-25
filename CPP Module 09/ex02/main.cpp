# include "PmergeMe.hpp"

#include <iostream>
#include <string>

template <typename OuterContainer>
	void printContainerState(const std::string &label, const OuterContainer &container) {
		std::cout << "\033[1;33m" << label << "\033[1;36m" << std::endl;

		typedef typename OuterContainer::const_iterator OuterIt;
		typedef typename OuterIt::value_type::const_iterator InnerIt;

		size_t index = 0;
		for (OuterIt it = container.begin(); it != container.end(); ++it) {
			std::cout << "  index[" << index << "]: { ";

			for (InnerIt inner = it->begin(); inner != it->end(); ++inner) {
				std::cout << *inner << " ";
			}

			std::cout << "}" << std::endl;
			++index;
		}

		std::cout << "\033[0m" << std::endl;
	}

void compareVectorAndList(const vecMatrix &vecMat, const listMatrix &listMat)
{
	vecMatrix::const_iterator vit = vecMat.begin();
	listMatrix::const_iterator lit = listMat.begin();

	size_t index = 0;
	for (; vit != vecMat.end() && lit != listMat.end(); ++vit, ++lit, ++index) {
		int vnum = vit->front();
		int lnum = lit->front();

		if (vnum != lnum)
		{
			std::cout << BRIGHT_RED << "Error at index " << index << ": vector=" << vnum
					  << ", list=" << lnum << std::endl;
			return ;
		}
	}

	// Check if sizes are different
	if (vit != vecMat.end() || lit != listMat.end()) {
		std::cout << BRIGHT_RED << "Error: sizes differ between vector and list." << std::endl;
		return ;
	}

	std::cout << "\033[1;35mAll numbers matched!" << RESET << std::endl;
}

int main( int ac, char **av ) {
	if (ac < 2) {
		std::cerr << BRIGHT_RED << "Error: No input sequence." << std::endl;
		return EXIT_FAILURE;
	}

	int						num;
	vecMatrix				numbersV;
	listMatrix				numbersL;
	std::istringstream		numStream;

	for (int na = 1; na < ac; na++) {
		numStream.str(av[na]);
		if (!(numStream >> num) || !numStream.eof() || num < 0) {
			std::cout << "Error\n";
			return EXIT_FAILURE;
		}
		numbersV.push_back(std::vector<int>(1, num));
		numbersL.push_back(std::list<int>(1, num));
		numStream.clear();
	}

	// printContainerState("Initial State <vector>", numbersV);
	// printContainerState("Initial State <list>", numbersV);

	PmergeMe::mergeInsertSort(numbersV);
	PmergeMe::isSorted(numbersV);

	std::cout << BRIGHT_GREEN << BOLD << "✓ Total Comparisons <vector>: "
		<< PmergeMe::getTotalComparisons() << RESET << std::endl;

	PmergeMe::resetTotalComparisons();

	PmergeMe::mergeInsertSort(numbersL);
	PmergeMe::isSorted(numbersL);

	std::cout << BRIGHT_GREEN << BOLD << "✓ Total Comparisons <list>: "
		<< PmergeMe::getTotalComparisons() << RESET << std::endl;

	compareVectorAndList(numbersV, numbersL);

	return EXIT_SUCCESS;
}
