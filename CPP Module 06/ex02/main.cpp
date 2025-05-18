# include "main.hpp"

int main( void ) {
	Base*	base = generate();

	std::cout << "<Pointer> Identify: ";
	identify(base);

	std::cout << "<Reference> Identify: ";
	identify(*base);

	delete base;
}
