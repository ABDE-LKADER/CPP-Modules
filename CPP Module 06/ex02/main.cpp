# include "main.hpp"

int main( void ) {
	std::srand(std::time(0));

	Base*	base = generate();

	std::cout << "<Pointer> Identify: ";
	identify(base);

	std::cout << "<Reference> Identify: ";
	identify(*base);

	delete base;
}
