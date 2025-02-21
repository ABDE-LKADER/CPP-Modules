# include "Zombie.hpp"

Zombie::Zombie( void ) : name("") { }

Zombie::Zombie( std::string const &n ) : name(n) { }

Zombie::~Zombie( void ) { std::cout << name + " Is Dead..." << std::endl; }

void	Zombie::announce( void ) { std::cout << name + MESS << std::endl; }
