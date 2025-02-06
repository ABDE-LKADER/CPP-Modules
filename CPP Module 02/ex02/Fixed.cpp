# include "Fixed.hpp"

Fixed::Fixed( void ) : value(0) { }

Fixed::Fixed( int const num ) : value(num << nBits) { }

Fixed::Fixed( float const num ) : value(roundf(num * (1 << nBits))) { }

Fixed::Fixed( const Fixed &obj ) : value(obj.getRawBits()) { }

Fixed::~Fixed( void ) { }

Fixed&	Fixed::operator=( const Fixed& robj ) {
	value = robj.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( const Fixed& obj ) const {
	Fixed	result;
	result.value = value + obj.getRawBits();
	return (result);
}

Fixed	Fixed::operator-( const Fixed& obj ) const {
	Fixed	result;
	result.value = value - obj.getRawBits();
	return (result);
}

Fixed	Fixed::operator*( const Fixed& obj ) const {
	Fixed	result;
	std::cout << "*" << std::endl;
	std::cout << value << std::endl;
	std::cout << toFloat() << std::endl;
	std::cout << obj.getRawBits() << std::endl;
	result.value = value * obj.getRawBits();
	return (result);
}

Fixed	Fixed::operator/( const Fixed& obj ) const {
	Fixed	result;
	result.value = value / obj.getRawBits();
	return (result);
}

std::ostream&	operator<<( std::ostream &os, const Fixed &obj ) {
	os << obj.toFloat();
	return os;
}

bool	Fixed::operator>( const Fixed &robj ) const {
	return (robj.getRawBits() > value);
}

bool	Fixed::operator<( const Fixed &robj ) const {
	return (robj.getRawBits() < value);
}

bool	Fixed::operator>=( const Fixed &robj ) const {
	return (robj .getRawBits()>= value);
}

bool	Fixed::operator<=( const Fixed &robj ) const {
	return (robj .getRawBits()<= value);
}

bool	Fixed::operator==( const Fixed &robj ) const {
	return (robj .getRawBits()== value);
}

bool	Fixed::operator!=( const Fixed &robj ) const {
	return (robj .getRawBits()!= value);
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
