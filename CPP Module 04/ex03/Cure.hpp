#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure & );
		Cure&				operator=( const Cure & );
		~Cure( void );

		AMateria*			clone( void ) const;
		void				use( ICharacter & );
};

#endif
