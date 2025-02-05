#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) { }

ClapTrap::ClapTrap( std::string const &uName ) : name(uName) {
	std::cout << "ClapTrap " << name << " created!" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) { *this = obj; }

ClapTrap&	ClapTrap::operator=( const ClapTrap &obj ) {
	name = obj.name;
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	attackDamage = obj.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack( const std::string& target )
{
	if (!energyPoints || hitPoints < 0) {
		std::cout << "ClapTrap " << name << " can't attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", "
			  << attackDamage << " damage!" << std::endl;
	energyPoints--;
} 	

void ClapTrap::takeDamage( unsigned int amount )
{
	if (hitPoints < 0) {
		std::cout << "ClapTrap " << name << " can't take damage!" << std::endl;
		hitPoints = 0;
		return ;
	}
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount
			  << " damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (!energyPoints || hitPoints < 0) {
		std::cout << "ClapTrap " << name << " can't repair!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " repairs, +"
			  << amount << " HP!" << std::endl;
	hitPoints += amount;
	energyPoints--;
}
