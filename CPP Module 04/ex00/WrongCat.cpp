# include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat is created!" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &obj ) : WrongAnimal(obj) { *this = obj; }

WrongCat&	WrongCat::operator=( const WrongCat &obj ) {
	if (this == &obj)
		return (*this);
	return (type = obj.type, *this);
}

WrongCat::~WrongCat( void ) { 
	std::cout << "WrongCat is destroyed!" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow! The " << getType() << " makes a sound." << std::endl;
}
