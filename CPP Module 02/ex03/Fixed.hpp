#ifndef FIXED_H
# define FIXED_H

# include <math.h>
# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed&				operator=( const Fixed & );
		~Fixed( void );

		Fixed( int const );
		Fixed( float const );

		Fixed				operator+( const Fixed & ) const;
		Fixed				operator-( const Fixed & ) const;
		Fixed				operator*( const Fixed & ) const;
		Fixed				operator/( const Fixed & ) const;

		bool				operator>( const Fixed & ) const;
		bool				operator<( const Fixed & ) const;
		bool				operator>=( const Fixed & ) const;
		bool				operator<=( const Fixed & ) const;
		bool				operator==( const Fixed & ) const;
		bool				operator!=( const Fixed & ) const;

		Fixed&				operator++( void );
		Fixed				operator++( int );
		Fixed&				operator--( void );
		Fixed				operator--( int );

		static Fixed&		min( Fixed & , Fixed & );
		static Fixed const&	min( const Fixed & , const Fixed & );
		static Fixed&		max( Fixed & , Fixed & );
		static Fixed const&	max( const Fixed & , const Fixed & );

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
