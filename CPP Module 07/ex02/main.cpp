#include "Array.hpp"

# define MAX_VAL 42

int main( void )
{
	Array<long>	numbers(MAX_VAL);
	long*		mirror = new long[MAX_VAL];

	srand(time(NULL));

	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	std::cout << "INT::::::RANDOM::VALUES : ";
	for (size_t i = 0; i < MAX_VAL; i++) {
		std::cout << mirror[i] << " | ";
	}
	std::cout << std::endl;

	std::cout << "ARRAY::::RANDOM::VALUES : ";
	for (size_t i = 0; i < numbers.size(); i++) {
		std::cout << numbers[i] << " | ";
	}
	std::cout << std::endl;

	{
		Array<long> tmp = numbers;

		std::cout << "ARRAY:::USING::OPERATOR : ";
		for (size_t i = 0; i < tmp.size(); i++) {
			std::cout << tmp[i] << " | ";
		}
		std::cout << std::endl;

		Array<long> test(tmp);

		std::cout << "ARRAY::COPY::CONSTRUTOR : ";
		for (size_t i = 0; i < tmp.size(); i++) {
			std::cout << tmp[i] << " | ";
		}
		std::cout << "\n" << std::endl;

		tmp[0] = rand(); // Change Value
		std::cout << "INDEX [0] OF ARRAY AFTER CHANGE THE TMP: "
			<< numbers[0] << "\n" << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			delete[] mirror; return 1;
		}
	}

	try { numbers[-2] = 0; }
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try { numbers[MAX_VAL] = 0; }
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete[] mirror;
}
