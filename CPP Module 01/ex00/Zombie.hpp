#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define MESS ": BraiiiiiiinnnzzzZ..."

class Zombie
{
	public:
		Zombie( void );
		~Zombie( void );

		Zombie( std::string const & );

		void		announce( void );

	private:
		std::string	name;
};

#endif
