# include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _array(NULL), _size(0) { }

template <typename T>
Array<T>::Array( const Array &other )
		: _array(new T[other._size]), _size(other._size) {
	for (size_t index = 0; index < _size; index++) {
		_array[index] = other._array[index];
	}
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array &other ) {
	if (this == &other)
		return *this;
	delete[] _array;
	_size = other._size;
	_array = new T[_size];
	for (size_t index = 0; index < _size; index++) {
		_array[index] = other._array[index];
	}
	return *this;
}

template <typename T>
Array<T>::~Array( void ) {
	delete[] _array;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _array(new T[n]),
		_size(n) { }

template <typename T>
T	&Array<T>::operator[]( int index ) {
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::out_of_range("Index out of bounds");
	return _array[index];
}

template <typename T>
const T	&Array<T>::operator[]( int index ) const {
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::out_of_range("Index out of bounds");
	return _array[index];
}

template <typename T>
unsigned int	Array<T>::size( void ) const {
	return _size;
}
