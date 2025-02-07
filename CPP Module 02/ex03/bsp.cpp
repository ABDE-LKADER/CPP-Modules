# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
	return (a.area(b, c) == (point.area(a, b) + point.area(b, c) + point.area(c, a)));
}
