# include "easyfind.hpp"

int main( void ) {
	std::list<int>		list;

	list.push_back(42);
	list.push_back(1337);
	list.push_back(2025);

	try { easyfind(list, 42); }
	catch( const std::exception& e ) {
		std::cerr << e.what() << '\n';
	}

	std::vector<int>		vec;

	vec.push_back(42);
	vec.push_back(1337);
	vec.push_back(2025);
	
	try { easyfind(vec, 404); }
	catch( const std::exception& e ) {
		std::cerr << e.what() << '\n';
	}
}
