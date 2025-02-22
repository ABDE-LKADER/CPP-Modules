#include "FragTrap.hpp"

int main() {
	FragTrap fragTrap("FPRIME");

	fragTrap.attack("FVIR");
	fragTrap.takeDamage(19);
	fragTrap.beRepaired(19);
	fragTrap.highFivesGuys();
	fragTrap.beRepaired(19);
	fragTrap.takeDamage(90);

	return 0;
}
