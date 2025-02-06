#ifndef DIAMONDRAP_HPP
# define DIAMONDRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( const DiamondTrap & );
		DiamondTrap&		operator=( const DiamondTrap & );
		~DiamondTrap( void );

		DiamondTrap( std::string const & );

		void	whoAmI( void );
		using	ScavTrap::attack;
	private:
		std::string		name;
};

#endif
