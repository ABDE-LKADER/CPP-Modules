#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( int const num );
		Fixed( float const num );
		~Fixed( void );
		Fixed( const Fixed &obj );
		Fixed&	operator=( const Fixed &obj );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					value;
		static int const	nBits = 8;
};

std::ostream&	operator<<( std::ostream &os, const Fixed &obj );

#endif
