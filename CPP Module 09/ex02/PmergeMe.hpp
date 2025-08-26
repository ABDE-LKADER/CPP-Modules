#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <iomanip>
# include <algorithm>
# include <sys/time.h>

# define RED "\033[91m"
# define CYAN "\033[96m"
# define YELLOW "\033[93m"
# define RESET "\033[0m"
# define BOLD "\033[1m"

typedef std::list<int> list;
typedef std::vector<int> vec;

typedef std::list< list > listMatrix;
typedef std::vector< vec > vecMatrix;

typedef struct timeval t_time;

class PmergeMe
{
	public:
		template < typename Container >
			static void		run( Container & , bool );

		static void			mergeInsertSort( vecMatrix & );
		static void			mergeInsertSort( listMatrix & );

		template < typename Container >
			static void		printContainerState( const std::string & , const Container & );

		static double		getMicroseconds( void );

		static std::string	containerType( vecMatrix & );
		static std::string	containerType( listMatrix & );

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

template < typename Container >
	void	PmergeMe::printContainerState(const std::string &label, const Container &container) {
		std::cout << BOLD YELLOW + label + RESET;

		typedef typename Container::const_iterator			iterator;

		for (iterator it = container.begin(); it != container.end(); ++it)
			std::cout << it->front() << " ";

		std::cout << std::endl;
	}

template < typename Container >
	void	PmergeMe::run( Container &container, bool print ) {
		totalComparisons = 0;

		if (print == true)
			printContainerState("Before:  ", container);

		double		startTime = getMicroseconds();
		mergeInsertSort(container);
		double		duration = getMicroseconds() - startTime;

		if (print == true)
			printContainerState("After:   ", container);

		std::cout << "Time to process a range of " << BOLD CYAN << container.size() << RESET
				  << " elements with " << containerType(container) << " : " << std::fixed << std::setprecision(5)
				  << BOLD CYAN << duration << RESET << " us" << std::endl;
	}

#endif
