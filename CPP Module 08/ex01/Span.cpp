# include "Span.hpp"

Span::Span( void ) : max(0) { }

Span::Span( const Span &other ) { *this = other; }

Span	&Span::operator=( const Span &other ) {
	if (this == &other) {
		max = other.max;
		storage = other.storage;
	} return *this;
}

Span::~Span( void ) { }

Span::Span( unsigned int N ) : max(N) { }

void	Span::addNumber( int value ) {
	if (storage.size() == max)
		throw std::out_of_range("Max size reached");
	storage.push_back(value);
}

int	Span::shortestSpan( void ) {
	if (storage.size() < 2)
		throw std::invalid_argument("No span can be found.");
	
	std::vector<int>	data = storage;
	int					shortest = std::numeric_limits<int>::max();

	std::sort(data.begin(), data.end());

	for (std::vector<int>::iterator it = data.begin(); it + 1 != data.end(); it++) {
		if (*(it + 1) - *it < shortest)
			shortest = *(it + 1) - *it;
	}

	return shortest;
}

int	Span::longestSpan( void ) {
	if (storage.size() < 2)
		throw std::invalid_argument("No span can be found.");
	return *std::max_element(storage.begin(), storage.end())
			- *std::min_element(storage.begin(), storage.end());
}
