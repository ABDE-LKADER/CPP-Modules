# include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(5, 5);
	Point	c(10, 0);
	Point	point(10, 1);

	if (bsp(a, b, c, point))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return 0;
}
