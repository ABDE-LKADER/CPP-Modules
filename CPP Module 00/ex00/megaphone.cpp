# include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int row = 1; row < ac; row++)
	{
		for (int index = 0; av[row][index]; index++)
			std::cout << (char)toupper(av[row][index]);
	}
	std::cout << std::endl;
	return (0);
}
