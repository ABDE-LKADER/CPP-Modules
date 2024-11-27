#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon( void );
		Weapon( std::string const & );
		std::string		getType( void ) const;
		void			setType( std::string const & );
	private:
		std::string		type;
};

#endif
