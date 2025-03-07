#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

# include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter & );
		ScalarConverter			&operator=( const ScalarConverter & );
		~ScalarConverter( void );

	private:
		std::string				attribute;
};

#endif
