#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name(""),
		hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap( std::string const &uName ) : name(uName),
		hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " created!" << std::endl;
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
	std::cout << "ClapTrap ";
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << name << " can't attack" << std::endl;
		return ;
	}
	std::cout << name << " attacks " << target << ", "
			  << attackDamage << " damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap ";
	if (hitPoints == 0) {
		std::cout << name << " can't take damage!" << std::endl;
		hitPoints = 0;
		return ;
	}
	if (amount > hitPoints) {
		std::cout << name << " takes " << hitPoints
				  << " damage!" << std::endl;
		hitPoints = 0;
		return ;
	}
	std::cout << name << " takes " << amount
			  << " damage!" << std::endl;
	hitPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap ";
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << name << " can't repair!" << std::endl;
		return ;
	}
	std::cout << name << " repairs, +"
			  << amount << " HP!" << std::endl;
	hitPoints += amount;
	energyPoints--;
}
