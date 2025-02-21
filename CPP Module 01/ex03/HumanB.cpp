# include "HumanB.hpp"

HumanB::HumanB( std::string const &n ) : weapon(NULL), name(n){ }

void	HumanB::setWeapon( Weapon &weapon ) { this->weapon = &weapon; }

void	HumanB::attack( void ) {
	std::cout << name;
	if (weapon)
		std::cout << " attacks with their " + weapon->getType() << std::endl;
	else
		std::cout << " can't Attack <!NEED WEAPON!>" << std::endl;
}
