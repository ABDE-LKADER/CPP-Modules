#include "Harl.hpp"

void	Harl::complain( std::string level )
{
	if (level.compare("DEBUG") == 0)
		debug();
	if (level.compare("INFO") == 0)
		info();
	if (level.compare("WARNING") == 0)
		warning();
	if (level.compare("ERROR") == 0)
		error();
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
}
