#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon( std::string const & );
		const std::string	getType( void ) ;
		void				setType( std::string const & );

	private:
		std::string			type;
};

#endif
