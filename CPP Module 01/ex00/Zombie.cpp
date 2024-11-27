#include "Zombie.hpp"

Zombie::~Zombie( void ) { std::cout << name + " Is Dead..." << std::endl; }

void    Zombie::setZombie( std::string const &newName ) { name = newName; }

void	Zombie::announce( void ) { std::cout << name + MESS << std::endl; }
