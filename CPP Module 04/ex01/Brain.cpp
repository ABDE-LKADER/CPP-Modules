# include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain is created!" << std::endl;
}

Brain::Brain( const Brain &obj ) { *this = obj; }

Brain&	Brain::operator=( const Brain &obj ) {
	if (this == &obj)
		return (*this);
	for (size_t index = 0; index < 100; index++) {
		ideas[index] = obj.ideas[index];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain is destroyed!" << std::endl;
}
