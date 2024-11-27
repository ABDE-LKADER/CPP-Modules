#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

# define MESS ": BraiiiiiiinnnzzzZ..."

class Zombie
{
	public:
		~Zombie( void );
		void	setZombie( std::string const &name );
		void	announce( void );
	private:
		std::string name;
};

#endif
