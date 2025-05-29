# include "main.hpp"

Base*	generate( void ) {
	int num = std::rand() % 3;

	if (num == 0) return (new A);
	if (num == 1) return (new B);

	return (new C);
}
