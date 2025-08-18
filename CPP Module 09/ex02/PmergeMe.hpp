#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <iomanip>
# include <utility>
# include <algorithm>

typedef std::vector< std::vector<int> > vec;

class PmergeMe
{
	public:
		PmergeMe( void );
		PmergeMe( const PmergeMe & );
		PmergeMe			&operator=( const PmergeMe & );
		~PmergeMe( void );

		PmergeMe( vec & );

		void				mergeInsertSort( vec & );

	private:
		int					level;
		int					pairSize;
		int					logCounter;
};

#endif
