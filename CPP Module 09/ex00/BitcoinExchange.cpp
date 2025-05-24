# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) { }

BitcoinExchange::BitcoinExchange( const BitcoinExchange &other ) { *this = other; }

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange &other ) {
	if (this == &other) {
		attribute = other.attribute;
	} return *this;
}

BitcoinExchange::~BitcoinExchange( void ) { }
