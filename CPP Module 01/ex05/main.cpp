#include "Harl.hpp"

int main( int ac, char **av )
{
	Harl			harl;
	std::string		level;

	if (ac != 2)
		return (1);
	level.assign(av[1]);
	harl.complain(level);
}
