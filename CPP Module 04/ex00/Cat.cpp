# include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat is created!" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat &obj ) : Animal(obj) { *this = obj; }

Cat&	Cat::operator=( const Cat &obj ) {
	if (this == &obj)
		return (*this);
	return (type = obj.type, *this);
}

Cat::~Cat( void ) { 
	std::cout << "Cat is destroyed!" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow! The " << getType() << " makes a sound." << std::endl;
}
