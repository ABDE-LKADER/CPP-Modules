#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <iomanip>
# include <limits>
# include <cerrno>

# define RED     "\e[1;31m"
# define YELLOW  "\e[1;33m"
# define BOLD    "\e[38;5;252m"
# define RESET   "\e[0m"

enum etype { CHAR, FLOAT, DOUBLE, OTHER };

class ScalarConverter {
	public: static void	convert( const std::string & );

	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter & );
		ScalarConverter			&operator=( const ScalarConverter & );
		~ScalarConverter( void );
};

#endif
