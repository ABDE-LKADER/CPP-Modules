#include "main.hpp"

int		main( void )
{
	Zombie	*Zombie1 = newZombie("Zombie1");
	Zombie	*Zombie2 = newZombie("Zombie2");
	Zombie	*Zombie3 = newZombie("Zombie3");

	Zombie1->announce();
	Zombie2->announce();
	Zombie3->announce();

	randomChump("Zombie4");
	randomChump("Zombie5");
	randomChump("Zombie6");

	delete Zombie1;
	delete Zombie2;
	delete Zombie3;
}
