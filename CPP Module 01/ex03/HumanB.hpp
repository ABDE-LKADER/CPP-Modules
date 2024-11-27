#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string const & );
		void			attack( void );
		void			setWeapon( Weapon & );
	private:
		Weapon			*weapon;
		std::string		name;
};

#endif
