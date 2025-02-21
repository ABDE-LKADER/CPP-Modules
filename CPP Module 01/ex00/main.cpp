# include "main.hpp"

int		main( void )
{
	Zombie	*Zombie1 = newZombie("Ultra");
	Zombie	*Zombie2 = newZombie("Booster");
	Zombie	*Zombie3 = newZombie("Someone");

	Zombie1->announce();
	Zombie2->announce();
	Zombie3->announce();

	randomChump("Master");
	randomChump("Soller");
	randomChump("Sigma");

	delete Zombie1;
	delete Zombie2;
	delete Zombie3;
}
