#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <iomanip>
# include <utility>
# include <algorithm>

# define RESET "\033[0m"
# define BRIGHT_GREEN "\033[92m"
# define BRIGHT_RED "\033[91m"
# define BOLD "\033[1m"

typedef std::list<int> list;
typedef std::vector<int> vec;
typedef std::list< list > listMatrix;
typedef std::vector< vec > vecMatrix;

class PmergeMe
{
	public:	
		static size_t		getTotalComparisons( void );
		static void			mergeInsertSort( vecMatrix & );
		static void			mergeInsertSort( listMatrix & );
		static void			resetTotalComparisons( void );

		template <typename Container>
			static bool 	isSorted(const Container &container);

	private:
		PmergeMe( void );
		PmergeMe( const PmergeMe & );
		PmergeMe			&operator=( const PmergeMe & );
		~PmergeMe( void );

		template< typename Container >
			static bool		headLess( const Container & , const Container & );

		static int			J( int );
		static size_t		totalComparisons;
};

template < typename Container >
	bool	PmergeMe::headLess(const Container &first, const Container &second) {
		return (totalComparisons++, first.front() < second.front());
	}

template <typename Container>
	bool PmergeMe::isSorted(const Container &container)
	{
		if (container.size() <= 1) {
			std::cout << BRIGHT_GREEN << BOLD << "✓ SORTED" << RESET << std::endl;
			return true;
		}

		typename Container::const_iterator prev = container.begin();
		typename Container::const_iterator curr = container.begin();
		++curr;

		while (curr != container.end())
		{
			if (!prev->empty() && !curr->empty()) {
				if ((*curr->begin()) < (*prev->begin())) {
					std::cout << BRIGHT_RED << BOLD << "✗ NOT SORTED" << RESET << std::endl;
					return false;
				}
			}
			++prev;
			++curr;
		}

		std::cout << BRIGHT_GREEN << BOLD << "✓ SORTED" << RESET << std::endl;
		return true;
	}

#endif
