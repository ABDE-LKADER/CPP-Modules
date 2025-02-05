#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap & );
		ScavTrap&		operator=( const ScavTrap & );
		~ScavTrap( void );

		ScavTrap( std::string const & );

		void	guardGate( void );
};

#endif
