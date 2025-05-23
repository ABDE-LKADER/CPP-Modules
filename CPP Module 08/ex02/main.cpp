# include "MutantStack.hpp"

int	main( void )
{
	MutantStack<int>			mstack;

	std::cout << "Basic stack behavior:\n\n";

	mstack.push(20);
	mstack.push(10);

	std::cout << "-> Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "-> Size after pop: " << mstack.size() << std::endl;

	std::cout << "\n➕ Adding more elements:\n\n";

	mstack.push(30);
	mstack.push(40);
	mstack.push(50);
	mstack.push(60);

	std::cout << "Current stack (via Iteration):\n";

	MutantStack<int>::iterator	begin = mstack.begin();
	MutantStack<int>::iterator	end = mstack.end();

	++begin, --begin;

	while (begin != end) {
		std::cout << "|" << *begin << "|" << std::endl;
		++begin;
	}

	std::stack<int> copy(mstack);
	std::cout << "\n✅ Copy from MutantStack to std::stack successful\n";

	std::cout << "\nComparing with std::list:\n";

	std::list<int>				list;

	list.push_back(20);
	list.push_back(30);
	list.push_back(40);
	list.push_back(50);
	list.push_back(60);

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		std::cout << "|" << *it << "|" << std::endl;
	}
}
