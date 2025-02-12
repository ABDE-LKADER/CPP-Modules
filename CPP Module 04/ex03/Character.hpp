#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character( void );
		Character( const Character & );
		Character&				operator=( const Character & );
		~Character( void );

		Character( std::string const & );

		std::string const&		getName( void ) const;
		void					equip( AMateria * );
		void					unequip( int );
		void					use( int , ICharacter & );
	private:
		std::string				name;
		AMateria				*inventory[4];
};

#endif
