#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <stdexcept>
# include <iomanip>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange & );
		BitcoinExchange				&operator=( const BitcoinExchange & );
		~BitcoinExchange( void );

		int							processDate( const std::string& );
		float						processValue( const std::string& );
		void						processLine( const std::string& );
		void						processToExchange( const std::string & );

	private:
		std::map<int, float>		database;
};

#endif
