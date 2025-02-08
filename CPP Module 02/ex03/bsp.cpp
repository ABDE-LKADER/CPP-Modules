# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
	return (point.area(a, b).toFloat() && point.area(b, c).toFloat() && point.area(c, a).toFloat()
			&& a.area(b, c) == point.area(a, b) + point.area(b, c) + point.area(c, a));
}
