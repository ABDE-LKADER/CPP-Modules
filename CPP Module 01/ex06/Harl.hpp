#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

enum enHarl { DEBUG, INFO, WARNING, ERROR, NONE };
# define UNKNOWN "[ Probably complaining about insignificant problems ]"

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
