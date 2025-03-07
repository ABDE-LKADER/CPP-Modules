# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) { }

ScalarConverter::ScalarConverter( const ScalarConverter &other ) { *this = other; }

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &other ) {
	if (this == &other) {
		attribute = other.attribute;
	} return *this;
}

ScalarConverter::~ScalarConverter( void ) { }
