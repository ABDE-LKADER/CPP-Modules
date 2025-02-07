# include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 0);
	Point	c(0, 0);
	Point	point(0, 0);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point outside the triangle" << std::endl;
	return 0;
}
