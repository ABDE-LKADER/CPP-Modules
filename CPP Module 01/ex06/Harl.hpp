#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define UNKNOWN "[ Probably complaining about insignificant problems ]"

enum enHarl { DEBUG, INFO, WARNING, ERROR, NONE };

class Harl
{
	public:
		void	complain( std::string );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
