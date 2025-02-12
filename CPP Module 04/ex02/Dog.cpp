# include "Dog.hpp"

Dog::Dog( void ) : brain(new Brain()) {
	std::cout << "Dog is created!" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog &obj ) : Animal(obj), brain(new Brain(*obj.brain)) { }

Dog&	Dog::operator=( const Dog &obj ) {
	if (this == &obj)
		return (*this);
	delete brain;
	Animal::operator=(obj);
	brain = new Brain(*obj.brain);
	return (*this);
}

Dog::~Dog( void ) { 
	std::cout << "Dog is destroyed!" << std::endl;
	delete brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof! The " << getType() << " makes a sound." << std::endl;
}
