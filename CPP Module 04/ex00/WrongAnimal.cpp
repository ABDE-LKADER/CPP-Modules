# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") { 
	std::cout << "WrongAnimal is created!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj ) { *this = obj; }

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &obj ) {
	if (this == &obj)
		return (*this);
	return (type = obj.type, *this);
}

WrongAnimal::~WrongAnimal( void ) { 
	std::cout << "WrongAnimal is destroyed!" << std::endl;
}

std::string	WrongAnimal::getType( void ) const { return (type); }

void	WrongAnimal::makeSound( void ) const {
	std::cout << getType() << " make no sound! <Not-Defined>" << std::endl;
}
