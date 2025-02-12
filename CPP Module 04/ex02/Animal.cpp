# include "Animal.hpp"

Animal::Animal( void ) : type("Animal") { 
	std::cout << "Animal is created!" << std::endl;
}

Animal::Animal( const Animal &obj ) { *this = obj; }

Animal&	Animal::operator=( const Animal &obj ) {
	if (this == &obj)
		return (*this);
	return (type = obj.type, *this);
}

Animal::~Animal( void ) { 
	std::cout << "Animal is destroyed!" << std::endl;
}

std::string	Animal::getType( void ) const { return (type); }
