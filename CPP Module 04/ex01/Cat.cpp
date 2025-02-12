# include "Cat.hpp"

Cat::Cat( void ) : brain(new Brain()) {
	std::cout << "Cat is created!" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat &obj ) : Animal(obj), brain(new Brain(*obj.brain)) { }

Cat&	Cat::operator=( const Cat &obj ) {
	if (this == &obj)
		return (*this);
	delete brain;
	Animal::operator=(obj);
	brain = new Brain(*obj.brain);
	return (*this);
}

Cat::~Cat( void ) { 
	std::cout << "Cat is destroyed!" << std::endl;
	delete brain;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow! The " << getType() << " makes a sound." << std::endl;
}
