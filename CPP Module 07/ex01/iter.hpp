#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	printIt( const T &value ) {
	std::cout << ">    " << value << std::endl;
}

template <typename T, typename FUNC>
void	iter( T* array, size_t length, FUNC func ) {
	for (size_t index = 0; index < length; index++) {
		func(array[index]);
	}
}

#endif
