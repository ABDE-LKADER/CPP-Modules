# include "easyfind.hpp"

template <typename T>
void	easyfind( const T &container, int to_find ) {
	std::ostringstream		message;
	typename T::const_iterator	it = std::find(container.begin(), container.end(), to_find);

	if (it == container.end()) {
		message << "❌ Not Found: < " << to_find << " > is not in the container.";
		throw std::invalid_argument(message.str());
	}
	std::cout << "🎯 Success! < " << to_find << " > was found." << std::endl;
}
