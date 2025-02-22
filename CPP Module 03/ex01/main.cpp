#include "ScavTrap.hpp"

int main() {
	ScavTrap scavTrap("SPRIME");

	scavTrap.attack("SVIR");
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(9);
	scavTrap.guardGate();
	
	return 0;
}
