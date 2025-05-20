#ifndef whatever_HPP
# define whatever_HPP

# include <iostream>

template <typename T>
void	swap( T &first, T& second ) {
	T	swap;

	swap = first;
	first = second;
	second = swap;
}

template <typename T>
T	min( const T &first, const T& second ) {
	return ( first < second ? first : second);
}

template <typename T>
T	max( const T &first, const T& second ) {
	return ( first > second ? first : second);
}

#endif
