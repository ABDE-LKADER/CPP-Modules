# include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 10);
	Point	c(0, 20);
	Point	point(1, 15);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
