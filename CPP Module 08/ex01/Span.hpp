#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <stdexcept>
# include <algorithm>
# include <limits>

class Span
{
	public:
		Span( void );
		Span( const Span & );
		Span				&operator=( const Span & );
		~Span( void );

		Span( unsigned int );

		void				addNumber( int );
		int					shortestSpan( void );
		int					longestSpan( void );

		template			<typename Iterator>
		void				addRange( Iterator, Iterator );

	private:
		unsigned int		max;
		std::vector<int>	storage;
};

		template <typename Iterator>
void	Span::addRange( Iterator begin, Iterator end ) {
	unsigned int	range = std::distance(begin, end);

	if (storage.size() + range > max)
		throw std::invalid_argument("No space found in span.");
	storage.insert(storage.end(), begin, end);
}

#endif
