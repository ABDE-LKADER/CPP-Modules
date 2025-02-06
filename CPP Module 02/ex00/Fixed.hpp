#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed&				operator=( const Fixed & );
		~Fixed( void );

		int					getRawBits( void ) const;
		void				setRawBits( int const  );
	private:
		int					value;
		static int const	nBits = 8;
};

#endif
