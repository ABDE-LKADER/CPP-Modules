# include "Fixed.hpp"

Fixed::Fixed( void ) : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const num ) : value(num << nBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const num ) : value(roundf(num * (1 << nBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj ){
	std::cout << "Copy constructor called" << std::endl;
	value = obj.getRawBits();
}

Fixed&	Fixed::operator=( const Fixed& obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = obj.getRawBits();
	return (*this);
}

std::ostream&	operator<<( std::ostream &os, const Fixed &obj ) {
	os << obj.toFloat();
	return os;
}

int Fixed::getRawBits( void ) const {
	return value;
}

void Fixed::setRawBits( int const raw ) {
	value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)value / (1 << nBits));
}

int	Fixed::toInt( void ) const {
	return (value >> nBits);
}
