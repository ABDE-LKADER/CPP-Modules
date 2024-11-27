#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	zombie;

	zombie.setZombie(name);
	zombie.announce();
}
