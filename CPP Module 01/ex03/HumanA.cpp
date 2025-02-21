# include "HumanA.hpp"

HumanA::HumanA(std::string const &n, Weapon &w) : weapon(w), name(n) { }

void	HumanA::attack( void ) {
	std::cout << name + " attacks with their " + weapon.getType() << std::endl;
}
