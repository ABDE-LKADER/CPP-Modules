# include "Point.hpp"

int	main(void)
{
	Point	a(10, 10);
	Point	b(10, 10);
	Point	c(20, 20);
	Point	point(1, 15);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
