# include "main.hpp"

int		main( void )
{
	int		numZombies = 9;
	Zombie	*Zombies = zombieHorde(numZombies, "Zombieee");

	for (int Num = 0; Zombies && Num <= numZombies; Num++)
		Zombies[Num].announce();
	delete[] Zombies;
}
