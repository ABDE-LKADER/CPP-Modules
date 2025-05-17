#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>
# include <stdint.h>

struct Data {
	short	num;
};

class Serializer
{
	public:
		static uintptr_t	serialize( Data * );
		static Data*		deserialize( uintptr_t );

	private:
		Serializer( void );
		Serializer( const Serializer & );
		Serializer			&operator=( const Serializer & );
		~Serializer( void );
};

#endif
