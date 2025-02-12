# include "Ice.hpp"

Ice::Ice( void ) : AMateria("Ice") { }

Ice::Ice( const Ice &obj ) : AMateria(obj) { }

Ice&	Ice::operator=( const Ice &obj ) {
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Ice::~Ice( void ) { }

AMateria*	Ice::clone( void ) const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
