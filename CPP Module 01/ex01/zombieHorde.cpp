# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Zombies = new(std::nothrow) Zombie[N + 1];

	for (int Num = 0; Zombies && Num <= N; Num++)
		new (&Zombies[Num]) Zombie(name);
	return (Zombies);
}
