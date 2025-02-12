# include "Dog.hpp"
# include "Cat.hpp"

# define NUMBER_ANIMALS 8

int main() {
	Animal	*animals[NUMBER_ANIMALS];

	for (size_t index = 0; index < NUMBER_ANIMALS; index++) {
		if (index < NUMBER_ANIMALS / 2)
			animals[index] = new Cat();
		else
			animals[index] = new Dog();
	}
	for (size_t index = 0; index < NUMBER_ANIMALS; index++) {
		std::cout << animals[index]->getType() << std::endl;
	}
	for (size_t index = 0; index < NUMBER_ANIMALS; index++) {
		delete animals[index];
	}
}
