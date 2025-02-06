#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap & );
		ScavTrap&		operator=( const ScavTrap & );
		~ScavTrap( void );

		ScavTrap( std::string const & );

		void	attack( const std::string& );
		void	guardGate( void );
};

#endif
