#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria( void );
		AMateria( const AMateria & );
		AMateria&			operator=( const AMateria & );
		virtual ~AMateria( void );

		AMateria( std::string const & );

		std::string const&	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter & );

	protected:
		std::string			type;
};

#endif
