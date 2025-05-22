# include "Span.hpp"

int main()
{
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span	span = Span(10002);
	std::vector<int> values;

	for (int num = 0; num < 10000; num++) {
		values.push_back(num);
	}

	try {
		span.addNumber(999999999);
		span.addNumber(999999998);
		span.addRange(values.begin(), values.end());
		span.addNumber(999999997);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}
