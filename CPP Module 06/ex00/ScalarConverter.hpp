#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <iomanip>
# include <limits>
# include <cerrno>
# include <stdexcept>

# define RED     "\e[1;31m"
# define YELLOW  "\e[1;33m"
# define BOLD    "\e[38;5;252m"
# define RESET   "\e[0m"

enum etype { CHAR, INT, FLOAT, DOUBLE };

class ScalarConverter {
	public: static void	convert( const std::string & );
};

#endif
