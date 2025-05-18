# include "main.hpp"

void	identify( Base* p ) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;

	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;

	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify( Base& p ) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}	catch( ... ) { }


	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}	catch( ... ) { }

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}	catch( ... ) { }
}
