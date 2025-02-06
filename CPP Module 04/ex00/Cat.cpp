# include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat is created!" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat &obj ) : Animal(obj) { *this = obj; }

Cat&     Cat::operator=( const Cat &obj ) {
    type = obj.type;
	return (*this);
}

Cat::~Cat( void ) { 
	std::cout << "Cat is destroyed!" << std::endl;
}

void	Cat::makeSound( void ) {
	std::cout << " Woof! The " << getType() <<< " makes a sound." << std::endl;
}
