#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( const ClapTrap & );
		ClapTrap&		operator=( const ClapTrap & );
		~ClapTrap( void );

		ClapTrap( std::string const & );

		void			attack( const std::string& );
		void			takeDamage( unsigned int );
		void			beRepaired( unsigned int );

	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif
