# include "AMateria.hpp"

AMateria::AMateria( void ) : type("") { }

AMateria::AMateria( const AMateria &obj ) : type(obj.type) { }

AMateria&	AMateria::operator=( const AMateria &obj ) {
	if (this != &obj)
		type = obj.type;
	return (*this);
}

AMateria::~AMateria( void ) { }

AMateria::AMateria( std::string const &type ) : type(type) { }

std::string const&	AMateria::getType( void ) const {
	return (type);
}

void	AMateria::use( ICharacter &target ) { (void)target; }
