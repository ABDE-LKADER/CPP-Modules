#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>
# include <stdexcept>
# include <cstdlib>
# include <cctype>

class RPN
{
	public:
		static int		calculate( std::istringstream & );

	private:
		RPN( void );
		RPN( const RPN & );
		RPN				&operator=( const RPN & );
		~RPN( void );
};

#endif
