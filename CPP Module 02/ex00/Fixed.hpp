#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &obj );
		Fixed&	operator=( const Fixed &obj );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					value;
		static int const	nBits = 8;
};

#endif
