#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>

class BitcoinExchange
{
	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange & );
		BitcoinExchange			&operator=( const BitcoinExchange & );
		~BitcoinExchange( void );

	private:
		std::string				attribute;
};

#endif
