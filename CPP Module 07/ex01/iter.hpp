#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	printIt( const T &value ) {
	std::cout << ">    " << value << std::endl;
}

template <typename T>
void	iter( T* array, int length, void (*func)( const T & ) ) {
	for (int index = 0; index < length; index++) {
		func(array[index]);
	}
}

#endif
