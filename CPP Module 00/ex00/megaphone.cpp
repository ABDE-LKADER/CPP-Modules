# include <iostream>

using namespace std;

int	main(int ac, char **av)
{
	int		row;
	int		index;

	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (row = 1; row < ac; row++)
	{
		for (index = 0; av[row][index]; index++)
			cout << (char)toupper(av[row][index]);
	}
	cout << endl;
	return (0);
}
