# include "main.hpp"

Base*	generate( void ) {
	std::srand(std::time(0));

	int num = std::rand() % 3;

	if (num == 0) return (new A);
	if (num == 1) return (new B);

	return (new C);
}
