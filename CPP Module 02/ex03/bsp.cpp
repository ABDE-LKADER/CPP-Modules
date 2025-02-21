# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
	return (point.area(a, b).getRawBits() && point.area(b, c).getRawBits() && point.area(c, a).getRawBits()
			&& a.area(b, c) == point.area(a, b) + point.area(b, c) + point.area(c, a));
}
