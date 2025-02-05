#include "ScavTrap.hpp"

int main() {
	ScavTrap scavTrap("SPRIME");

	scavTrap.attack("SVIR");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(8);
	scavTrap.guardGate();
	
	return 0;
}
