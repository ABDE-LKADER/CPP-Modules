# include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") { }

Cure::Cure( const Cure &obj ) : AMateria(obj) { }

Cure&	Cure::operator=( const Cure &obj ) {
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Cure::~Cure( void ) { }

AMateria*	Cure::clone( void ) const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}
