# include "HumanA.hpp"

HumanA::HumanA( std::string const &name, Weapon &weapon )
{
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::attack( void )
{
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}
