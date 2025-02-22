#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "FragTrap " << name << " created!" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap( std::string const &uName ) : ClapTrap(uName) {
	std::cout << "FragTrap " << name << " created!" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &obj ) : ClapTrap(obj) { *this = obj; }

FragTrap&	FragTrap::operator=( const FragTrap &obj ) {
	name = obj.name;
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	attackDamage = obj.attackDamage;
	return (*this);
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::attack( const std::string& target )
{
	std::cout << "FragTrap ";
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << name << " can't attack" << std::endl;
		return ;
	}
	std::cout << name << " attacks " << target << ", "
			  << attackDamage << " damage!" << std::endl;
	energyPoints--;
}

void	FragTrap::highFivesGuys( void ) {
	if (hitPoints != 0)
		std::cout << "FragTrap " << name << " Requests a high-five output." << std::endl;
}
