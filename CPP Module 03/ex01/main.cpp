#include "ScavTrap.hpp"

int main() {
	ScavTrap scavTrap("PRIME");

	scavTrap.attack("VIR");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(8);
	
	return 0;
}
