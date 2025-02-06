# include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog is created!" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog &obj ) : Animal(obj) { *this = obj; }

Dog&     Dog::operator=( const Dog &obj ) {
    type = obj.type;
	return (*this);
}

Dog::~Dog( void ) { 
	std::cout << "Dog is destroyed!" << std::endl;
}

void	Dog::makeSound( void ) {
	std::cout << " Woof! The " << getType() << " makes a sound." << std::endl;
}
