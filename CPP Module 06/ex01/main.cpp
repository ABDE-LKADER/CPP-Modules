# include "Serializer.hpp"

int main( void ) {
	Data	data = {4};

	std::cout << "Serializer: " << data.value << std::endl;

	uintptr_t	num = Serializer::serialize(&data);
	Data		*after = Serializer::deserialize(num);

	std::cout << "After Serializer: " << after->value << std::endl;

	if (&data == after)
		std::cout << "The Address Are The Same" << std::endl;
}
