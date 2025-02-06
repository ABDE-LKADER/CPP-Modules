#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const FragTrap & );
		FragTrap&		operator=( const FragTrap & );
		~FragTrap( void );

		FragTrap( std::string const & );

		void	attack( const std::string& );
		void	highFivesGuys(void);
};

#endif
