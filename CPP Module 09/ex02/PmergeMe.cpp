# include "PmergeMe.hpp"

size_t	PmergeMe::totalComparisons = 0;

std::string	PmergeMe::containerType( listMatrix & ) { return ("std::list  "); }

std::string	PmergeMe::containerType( vecMatrix & ) { return ("std::vector"); }

int	PmergeMe::J( int n ) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	return (J(n - 1) + 2 * J(n - 2));
}

double	PmergeMe::getMicroseconds( void ) {
	t_time			time;

	gettimeofday(&time, NULL);
	return (time.tv_sec + time.tv_usec / 1000000.0);
}

void	PmergeMe::mergeInsertSort( vecMatrix &container ) {

	if (container.size() <= 1)
		return;

	vec				leftover;
	int				hasLeftover;

	if ((hasLeftover = (container.size() % 2))) {
		leftover = vec(container.back().begin(),
			container.back().end());
		container.pop_back();
	}

	for (size_t an = 0; an < container.size() - 1; an++) {
		if (headLess(container[an], container[an + 1]))
			std::swap(container[an], container[an + 1]);
		container[an].insert(container[an].end(), container[an + 1].begin(),
			container[an + 1].end());
		container.erase(container.begin() + an + 1);
	}

	mergeInsertSort(container);

	vecMatrix		losers;
	int				pairSize = container.front().size() / 2;

	for (vecMatrix::iterator pos = container.begin(); pos != container.end(); ++pos) {
		vec		loser(pos->begin() + pairSize, pos->end());
		pos->erase(pos->begin() + pairSize, pos->end());
		losers.push_back(loser);
	}

	container.insert(container.begin(), losers.front());

	if (hasLeftover)
		losers.push_back(leftover);

	size_t			add = 0;
	size_t			seq = 2;

	for (size_t pos = 0; pos < losers.size(); seq++) {
		size_t		prev = J(seq);
		size_t		next = J(seq + 1);

		for (size_t endIdx = std::min(next, losers.size()); endIdx > prev; endIdx--) {
			container.insert(std::lower_bound(container.begin(), container.begin() + endIdx
				+ add, losers[endIdx - 1], headLess<vec>), losers[endIdx - 1]);
			add++;
		}
		pos = next;
	}
}

void	PmergeMe::mergeInsertSort( listMatrix &container ) {

	if (container.size() <= 1)
		return;

	list			leftover;
	int				hasLeftover;

	if ((hasLeftover = (container.size() % 2))) {
		leftover = list(container.back().begin(),
			container.back().end());
		container.pop_back();
	}

	for (listMatrix::iterator an = container.begin(); an != container.end(); an++) {
		listMatrix::iterator		next = an;

		++next;
		if (headLess(*an, *next))
			std::swap(*an, *next);
		an->insert(an->end(), next->begin(), next->end());
		container.erase(next);
	}

	mergeInsertSort(container);

	listMatrix		losers;
	int				pairSize = container.front().size() / 2;

	for (listMatrix::iterator pos = container.begin(); pos != container.end(); ++pos) {
		list::iterator		pairPos = pos->begin();
		std::advance(pairPos, pairSize);

		list		loser(pairPos, pos->end());
		
		pos->erase(pairPos, pos->end());
		losers.push_back(loser);
	}

	container.insert(container.begin(), losers.front());

	if (hasLeftover)
		losers.push_back(leftover);

	size_t			add = 0;
	size_t			seq = 2;

	for (size_t pos = 0; pos < losers.size(); seq++) {
		size_t		prev = J(seq);
		size_t		next = J(seq + 1);

		for (size_t endIdx = std::min(next, losers.size()); endIdx > prev; endIdx--) {
			listMatrix::iterator		endPos = container.begin();
			std::advance(endPos, endIdx + add);

			listMatrix::iterator		loserIt = losers.begin();
			std::advance(loserIt, endIdx - 1);

			container.insert(std::lower_bound(container.begin(), endPos, *loserIt,
				headLess<list>), *loserIt);
			add++;
		}
		pos = next;
	}
}
