#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter( void ) {}

		virtual std::string const&	getName( void ) const = 0;
		virtual void				equip( AMateria * ) = 0;
		virtual void				unequip( int ) = 0;
		virtual void				use( int , ICharacter & ) = 0;
};

#endif
