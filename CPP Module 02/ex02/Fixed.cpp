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
	Fixed	result(toFloat() + obj.toFloat());
	return (result);
}

Fixed	Fixed::operator-( const Fixed& obj ) const {
	Fixed	result(toFloat() - obj.toFloat());
	return (result);
}

Fixed	Fixed::operator*( const Fixed& obj ) const {
	Fixed	result(toFloat() * obj.toFloat());
	return (result);
}

Fixed	Fixed::operator/( const Fixed& obj ) const {
	Fixed	result(toFloat() / obj.toFloat());
	return (result);
}

std::ostream&	operator<<( std::ostream &os, const Fixed &obj ) {
	os << obj.toFloat();
	return os;
}

bool	Fixed::operator>( const Fixed &robj ) const {
	return (robj.getRawBits() > getRawBits());
}

bool	Fixed::operator<( const Fixed &robj ) const {
	return (robj.getRawBits() < getRawBits());
}

bool	Fixed::operator>=( const Fixed &robj ) const {
	return (robj.getRawBits() >= getRawBits());
}

bool	Fixed::operator<=( const Fixed &robj ) const {
	return (robj.getRawBits() <= getRawBits());
}

bool	Fixed::operator==( const Fixed &robj ) const {
	return (robj.getRawBits() == getRawBits());
}

bool	Fixed::operator!=( const Fixed &robj ) const {
	return (robj.getRawBits() != getRawBits());
}

Fixed&	Fixed::operator++( void ) {
	++value;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	result;
	result.value = value++;
	return (value++);
}

Fixed&	Fixed::operator--( void ) {
	--value;
	return (*this);
}

Fixed	Fixed::operator--( int ) {
	Fixed	result;
	result.value = value--;
	return (result);
}

Fixed	&Fixed::min( Fixed &first, Fixed &second ) {
	return (first < second) ? second : first;
}

Fixed const	&Fixed::min( const Fixed &first, const Fixed &second ) {
	return (first < second) ? second : first;
}

Fixed	&Fixed::max( Fixed &first, Fixed &second ) {
	return (first > second) ? second : first;
}

Fixed const	&Fixed::max( const Fixed &first, const Fixed &second ) {
	return (first > second) ? second : first;
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
