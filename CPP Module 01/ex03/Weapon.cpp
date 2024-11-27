#include "Weapon.hpp"

Weapon::Weapon( void ) { ; }

Weapon::Weapon( std::string const &weapon ) { type = weapon; }

std::string		Weapon::getType( void ) const { return (type); }

void	Weapon::setType( std::string const &Value ) { type = Value; }
