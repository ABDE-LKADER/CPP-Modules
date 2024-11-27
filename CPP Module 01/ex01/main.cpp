#include "main.hpp"

int		main( void )
{
	int		numZombies = 99;
	Zombie	*Zombies = zombieHorde(numZombies, "Zombieee");

	for (int Num = 0; Num <= numZombies; Num++)
		Zombies[Num].announce();
	delete[] Zombies;
}
