#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("PRIME");

	clapTrap.attack("VIR");
	clapTrap.takeDamage(8);
	clapTrap.beRepaired(8);
	
	return 0;
}
