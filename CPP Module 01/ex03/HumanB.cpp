# include "HumanB.hpp"

HumanB::HumanB( std::string const &n ) : name(n) { }

void	HumanB::setWeapon( Weapon &weapon ) { this->weapon = &weapon; }

void	HumanB::attack( void ) {
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}
