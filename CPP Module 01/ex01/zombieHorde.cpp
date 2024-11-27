#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Zombies = new Zombie[N + 1];

	for (int Num = 0; Num <= N; Num++)
		Zombies[Num].setZombie(name);
	return (Zombies);
}
