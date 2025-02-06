#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) { }

ScavTrap::ScavTrap( std::string const &uName ) : ClapTrap(uName) {
	std::cout << "ScavTrap " << name << " created!" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &obj ) : ClapTrap(obj) { *this = obj; }

ScavTrap&	ScavTrap::operator=( const ScavTrap &obj ) {
	name = obj.name;
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	attackDamage = obj.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

void ScavTrap::attack( const std::string& target )
{
	std::cout << "ScavTrap ";
	if (!energyPoints || hitPoints < 0) {
		std::cout << name << " can't attack" << std::endl;
		return ;
	}
	std::cout << name << " attacks " << target << ", "
			  << attackDamage << " damage!" << std::endl;
	energyPoints--;
} 	

void	ScavTrap::guardGate( void ) {
	if (hitPoints > 0)
		std::cout << "ScavTrap " << name << " Gatekeeper mode !ON!" << std::endl;
}
