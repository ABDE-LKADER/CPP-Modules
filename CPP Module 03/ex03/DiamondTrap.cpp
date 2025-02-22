#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap(), name("") {
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap( std::string const &uName ) : ClapTrap(uName + "_clap_name"),
		ScavTrap(uName), FragTrap(uName), name(uName) {
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj ) : ClapTrap(obj),
	ScavTrap(obj), FragTrap(obj) { *this = obj; }

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap &obj ) {
	name = obj.name;
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	attackDamage = obj.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap " << name << ", " << ClapTrap::name
			  << " is my ClapTrap"<< std::endl;
}
