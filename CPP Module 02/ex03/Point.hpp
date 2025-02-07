#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( const Point & );
		Point&			operator=( const Point & );
		~Point( void );

		Point( float const & , float const & );

		Fixed			area( const Point & , const Point & ) const;
	private:
		Fixed const		x;
		Fixed const		y;
};

bool	bsp( Point const , Point const , Point const , Point const );

#endif
