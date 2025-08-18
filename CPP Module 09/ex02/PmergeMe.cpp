# include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) : level(1), pairSize(1), logCounter(0) { }

PmergeMe::PmergeMe( const PmergeMe &other ) { *this = other; }

PmergeMe	&PmergeMe::operator=( const PmergeMe &other ) {
	if (this != &other)
		level = other.level;
	return *this;
}

PmergeMe::~PmergeMe( void ) { }

PmergeMe::PmergeMe( vec &container ) : level(1), pairSize(1), logCounter(0) {
	std::cout << "Size: " << container.size() << " --- Numbers: ";
	for (size_t an = 0; an < container.size(); an++) {
		std::cout << container[an][0];
		if (an != container.size() - 1) std::cout << " | ";
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	mergeInsertSort(container);
}

// JUST FOR TEST
void	printContainerState(const std::string& label, const std::vector< std::vector<int> >& container) {
	std::cout << label << std::endl;
	for (size_t i = 0; i < container.size(); ++i) {
		std::cout << "  index[" << i << "]: { ";
		for (size_t j = 0; j < container[i].size(); ++j) {
			std::cout << container[i][j] << " ";
		}
		std::cout << "}" << std::endl;
	}
	std::cout << "------------------------" << std::endl;
}

struct HeadLess {
	bool operator()(const std::vector<int>& a, const std::vector<int>& b) const {
		return a.front() < b.front(); // compare by head
	}
};

void JacobSthal(std::vector< std::vector<int> >& container,
				 const std::vector<int>& loser)
{
	std::vector< std::vector<int> >::iterator pos =
		std::upper_bound(container.begin(), container.end(), loser, HeadLess());

	container.insert(pos, loser);
}
// TESTING

void	PmergeMe::mergeInsertSort( vec &container ) {
	// Divide Into Pairs, Sort Pairs | Make The Biggest Pair Possible

	if (container.size() <= 1) {
		std::cout << "\n--> Base Case Reached. Returning.\n" << std::endl;
		return;
	}

	std::cout << "--- Entering Recursion Level " << level << " ---" << std::endl;
	std::cout << "Input List: ";

	for (size_t an = 0; an < container.size(); an++)
		std::cout << container[an][0] << " ";
	std::cout << std::endl;

	// size_t				size = container.size();
	// if ((hasLeftover = size % 2))
	// 	size -= 1;

	for (size_t an = 0; an < container.size() - 1; an++) {
		if (container[an].size() != container[an + 1].size())
			return ;
		if (container[an][0] < container[an + 1][0]) {
			std::swap(container[an], container[an + 1]);
			logCounter++;
		}
		container[an].insert(container[an].end(), container[an + 1].begin(), container[an + 1].end());
		container.erase(container.begin() + an + 1);
	}
	printContainerState("Before", container);

	level++;
	mergeInsertSort(container);
	level--;

	pairSize = container[0].size() / 2;
	std::cout << "After Recurcive ------ Size: " << container.size()
		<< ", Level: " << level << " ------- Pair Size: " << pairSize << std::endl;

	// Create The Main And The Pend | In Level 1
	// Insert Elements From The Pend To The Main Chain

	std::cout << "Winners, Losers" << std::endl;
	for (vec::iterator pos = container.begin(); pos != container.end(); ++pos) {
		if (pos->size() > static_cast<size_t>(pairSize)) {
			std::vector<int>	loser(pos->begin() + pairSize, pos->end());
			pos->erase(pos->begin() + pairSize, pos->end());
			JacobSthal(container, loser);
		}
	}
	std::cout << std::endl;

	printContainerState("After", container);
	std::cout << "\t----------- Container Size: " << container.size()
		<< " ----------- Compare Number: " << logCounter << std::endl << std::endl;
}
