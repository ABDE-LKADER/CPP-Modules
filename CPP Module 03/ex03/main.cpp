#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamondTrap("DPRIME");

	diamondTrap.attack("DVIR");
	diamondTrap.takeDamage(111);
	diamondTrap.beRepaired(444);
	diamondTrap.guardGate();
	diamondTrap.beRepaired(22);
	diamondTrap.takeDamage(80);
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();

	return 0;
}
