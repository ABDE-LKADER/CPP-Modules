#include "Weapon.hpp"

Weapon::Weapon( std::string const &weapon ) : type(weapon) { }

const std::string	Weapon::getType( void ) { return (type); }

void	Weapon::setType( std::string const &Value ) { type = Value; }
