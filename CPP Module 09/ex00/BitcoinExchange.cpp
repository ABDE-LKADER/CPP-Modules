# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	std::string					line;
	std::ifstream				dataFile("data.csv");

	if (dataFile.is_open() == false) {
		throw std::runtime_error("Error: could not open database file.");
	}

	getline(dataFile, line);
	while (getline(dataFile, line)) {
		std::istringstream			streamLine(line);

		char						garb;
		float						value;
		short						year, month, day;

		if (streamLine >> year >> garb >> month >> garb >> day >> garb >> value)
			database[(year * 10000) + (month * 100) + day] = value;
	}

	std::cout << "Database ... loaded." << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &other ) { *this = other; }

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange &other ) {
	if (&other != this) { database = other.database; }
	return *this;
}

BitcoinExchange::~BitcoinExchange( void ) { }

int	BitcoinExchange::processDate( const std::string& dateStr ) {
	std::istringstream			dateStream(dateStr);
	short						year, month, day;
	char						dash_1, dash_2;
	int							daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	dateStream >> std::noskipws;
	if (!(dateStream >> year >> dash_1 >> month >> dash_2 >> day)
			|| dash_1 != '-' || dash_2 != '-' || !dateStream.eof())
		throw std::runtime_error("Error: bad input => " + dateStr);

	if (month < 1 || month > 12)
		throw std::runtime_error("Error: Invalid given month.");

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		daysInMonth[2] = 29;

	if (day < 1 || day > daysInMonth[month]) {
		throw std::runtime_error("Error: Invalid day for the given month and year.");
	}

	return ((year * 10000) + (month * 100) + day);
}

float	BitcoinExchange::processValue( const std::string& valueStr ) {
	std::stringstream	valueStream(valueStr);
	float				value;

	valueStream >> std::noskipws;
	if (!(valueStream >> value) || !valueStream.eof())
		throw std::runtime_error("Error: non valid number.");
	if (value > 1000)
		throw std::runtime_error("Error: too large a number.");
	if (value < 0)
		throw std::runtime_error("Error: not a positive number.");

	return value;
}

void	BitcoinExchange::processLine( const std::string& line ) {
	std::string					separator = " | ";

	size_t sepPos = line.find(separator);
	if (sepPos == std::string::npos) {
		throw std::runtime_error("Error: bad input => " + line);
	}

	std::string					dateStr = line.substr(0, sepPos);
	std::string					valueStr = line.substr(sepPos + separator.length());

	int							dateKey = processDate(dateStr);
	float						value = processValue(valueStr);

	std::map<int, float>::iterator	it = database.lower_bound(dateKey);

	if (it == database.begin() && dateKey != it->first)
		throw std::runtime_error("Error: No data available for date => " + dateStr);
	if (it == database.end() || dateKey != it->first) it--;

	std::cout << dateStr << " => " << value << " = " << (value * it->second) << std::endl;
}

void	BitcoinExchange::processToExchange( const std::string& filename ) {
	std::string					line;
	std::ifstream				inFile(filename.c_str());

	if (inFile.is_open() == false)
		throw std::runtime_error("Error: could not open input file.");

	getline(inFile, line);
	if (line != "date | value")
		throw std::runtime_error("Error: Input file has an invalid or missing header.");

	while (getline(inFile, line)) {
		try {
			processLine(line);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
