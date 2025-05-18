#ifndef Array_HPP
# define Array_HPP

# include <iostream>

class Array
{
	public:
		Array( void );
		Array( const Array & );
		Array			&operator=( const Array & );
		~Array( void );

	private:
		std::string				attribute;
};

#endif
