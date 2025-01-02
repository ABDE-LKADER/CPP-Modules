#include "Harl.hpp"

static enHarl	level( std::string level )
{
	if (level.compare("DEBUG") == 0)
		return DEBUG;
	if (level.compare("INFO") == 0)
		return INFO;
	if (level.compare("WARNING") == 0)
		return WARNING;
	if (level.compare("ERROR") == 0)
		return ERROR;
	return NONE;
}

int	main( int ac, char **av) {
	Harl	harl;

	if (ac != 2)
		return 1;

	switch (level(av[1])) {
	default:
		std::cout << UNKNOWN << std::endl;
		break;
	case DEBUG:
		harl.complain("DEBUG");
	case INFO:
		harl.complain("INFO");
	case WARNING:
		harl.complain("WARNING");
	case ERROR:
		harl.complain("ERROR");
	}
	return 0;
}
