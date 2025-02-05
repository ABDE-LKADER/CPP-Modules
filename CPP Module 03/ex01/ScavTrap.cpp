#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) { }

// ScavTrap::ScavTrap( std::string const &uName ) : name(uName) {
// 	std::cout << "ScavTrap " << name << " created!" << std::endl;
// 	hitPoints = 10;
// 	energyPoints = 10;
// 	attackDamage = 0;
// }

ScavTrap::ScavTrap( const ScavTrap &obj ) { *this = obj; }

ScavTrap&	ScavTrap::operator=( const ScavTrap &obj ) {
	// name = obj.name;
	// hitPoints = obj.hitPoints;
	// energyPoints = obj.energyPoints;
	// attackDamage = obj.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	// std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

// void ScavTrap::attack( const std::string& target )
// {
// 	if (!energyPoints || hitPoints < 0) {
// 		std::cout << "ScavTrap " << name << " can't attack" << std::endl;
// 		return ;
// 	}
// 	std::cout << "ScavTrap " << name << " attacks " << target << ", "
// 			  << attackDamage << " damage!" << std::endl;
// 	energyPoints--;
// } 	

// void ScavTrap::takeDamage( unsigned int amount )
// {
// 	if (hitPoints < 0) {
// 		std::cout << "ScavTrap " << name << " can't take damage!" << std::endl;
// 		hitPoints = 0;
// 		return ;
// 	}
// 	hitPoints -= amount;
// 	std::cout << "ScavTrap " << name << " takes " << amount
// 			  << " damage!" << std::endl;
// }

// void ScavTrap::beRepaired( unsigned int amount )
// {
// 	if (!energyPoints || hitPoints < 0) {
// 		std::cout << "ScavTrap " << name << " can't repair!" << std::endl;
// 		return ;
// 	}
// 	std::cout << "ScavTrap " << name << " repairs, +"
// 			  << amount << " HP!" << std::endl;
// 	hitPoints += amount;
// 	energyPoints--;
// }

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << ", Gatekeeper mode!" << std::endl;
}
