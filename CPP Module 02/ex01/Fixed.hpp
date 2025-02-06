#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <math.h>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed&	operator=( const Fixed & );
		~Fixed( void );

		Fixed( int const );
		Fixed( float const );

		int					getRawBits( void ) const;
		void				setRawBits( int const );
		float				toFloat( void ) const;
		int					toInt( void ) const;
	private:
		int					value;
		static int const	nBits = 8;
};

std::ostream&	operator<<( std::ostream & , const Fixed & );

#endif
