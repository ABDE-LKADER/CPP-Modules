#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <ctime>

template <typename T>
class Array
{
	public:
		Array( void );
		Array( const Array & );
		Array			&operator=( const Array & );
		~Array( void );

		Array( unsigned int );

		T				&operator[]( int );
		const T			&operator[]( int ) const;
		unsigned int	size( void ) const;

	private:
		T				*_array;
		unsigned int	_size;
};

# include "Array.tpp"

#endif
