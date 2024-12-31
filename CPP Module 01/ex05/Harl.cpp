#include "Harl.hpp"

void	Harl::complain( std::string level )
{
	std::string levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	void (Harl::*ptrFun[4]) ( void ) = {
		*ptrFun = &Harl::debug,
		*(ptrFun + 1) = &Harl::info,
		*(ptrFun + 2) = &Harl::warning,
		*(ptrFun + 3) = &Harl::error
	};
	for (int lvl = 0; lvl < 4; lvl++)
		if (level.compare(levels[lvl]) == 0)
			(this->*ptrFun[lvl]) ();
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]: Entering the 'processOrder' function.";
	std::cout << " Order ID: 1337. Customer ID: 42." << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]: Order 1337 has been received";
	std::cout << " and is being processed." << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]: Credit card validation failed for order";
	std::cout << " 1337. Please verify card details." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]: Unable to connect to the payment gateway. ";
	std::cout << "Order 1337 processing has been halted." << std::endl;
}
