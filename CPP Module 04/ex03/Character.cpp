# include "Character.hpp"

Character::Character( void ) : name("") {
	for (size_t idx = 0; idx < 4; idx++)
		inventory[idx] = NULL;
}

Character::Character( const Character &obj ) : name(obj.name) {
	for (size_t idx = 0; idx < 4; idx++)
		inventory[idx] = obj.inventory[idx]->clone();
}

Character&	Character::operator=( const Character &obj ) {
	if (this == &obj)
		return (*this);
	name = obj.name;
	for (size_t idx = 0; idx < 4; idx++) {
		delete inventory[idx];
		inventory[idx] = obj.inventory[idx]->clone();
	}
	return (*this);
}

Character::~Character( void ) {
	for (size_t idx = 0; idx < 4; idx++)
		delete inventory[idx];
}

Character::Character( std::string const &name ) : name(name) {
	for (size_t idx = 0; idx < 4; idx++)
		inventory[idx] = NULL;
}

std::string const&	Character::getName( void ) const {
	return (name);
}

void	Character::equip( AMateria *materia ) {
	for (size_t idx = 0; idx < 4; idx++) {
		if (inventory[idx] == NULL) {
			inventory[idx] = materia;
			break ;
		}
	}
}

void	Character::unequip( int idx ) {
	if (idx >= 0 && idx <= 3)
		inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter &target ) {
	if (idx >= 0 && idx <= 3 && inventory[idx])
		inventory[idx]->use(target);
}
