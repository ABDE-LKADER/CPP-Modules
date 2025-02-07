# include "Point.hpp"

Point::Point( void ) : x(0), y(0) { }

Point::Point( const Point &obj ) : x(obj.x), y(obj.y) { }

Point&	Point::operator=( const Point& robj ) { (void)robj; return (*this); }

Point::~Point( void ) { }

Point::Point( float const &px , float const &py ) : x(px), y(py) { }

Fixed	Point::area( const Point &second , const Point &third ) const {
	return abs(((x * (second.y - third.y) + second.x * (third.y - y)
		+ third.x * (y - second.y)) / Fixed(2)).toFloat());
}
