#include "FragTrap.hpp"

int main() {
	FragTrap fragTrap("FPRIME");

	fragTrap.attack("FVIR");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(8);
	fragTrap.highFivesGuys();
	fragTrap.beRepaired(8);
	fragTrap.takeDamage(80);

	return 0;
}
