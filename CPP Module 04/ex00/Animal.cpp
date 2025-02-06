# include "Animal.hpp"

Animal::Animal( void ) : type("Not Set") { 
	std::cout << "Animal is created!" << std::endl;
}

Animal::Animal( const Animal &obj ) { *this = obj; }

Animal&     Animal::operator=( const Animal &obj ) {
    type = obj.type;
	return (*this);
}

Animal::~Animal( void ) { 
	std::cout << "Animal is destroyed!" << std::endl;
}

std::string	Animal::getType( void ) const { return (type); }

void		Animal::makeSound( void ) const {
	std::cout << "Animal is " << getType() << std::endl;
}
