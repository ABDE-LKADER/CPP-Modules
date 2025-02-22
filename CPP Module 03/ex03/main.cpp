#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamondTrap("DPRIME");

	diamondTrap.attack("DVIR");
	diamondTrap.takeDamage(11);
	diamondTrap.beRepaired(44);
	diamondTrap.guardGate();
	diamondTrap.beRepaired(22);
	diamondTrap.takeDamage(80);
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();

	return 0;
}
