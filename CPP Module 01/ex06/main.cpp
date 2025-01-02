#include "Harl.hpp"

static enHarl	level( std::string level )
{
	int			lvl;
	std::string levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	for (lvl = 0; lvl < 4; lvl++)
		if (level.compare(levels[lvl]) == 0)
			break ;
	return enHarl(lvl);
}

int	main( int ac, char **av) {
	Harl	harl;

	if (ac != 2)
		return (1);

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
	return (0);
}
