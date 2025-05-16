# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) { }

ScalarConverter::ScalarConverter( const ScalarConverter &other ) { *this = other; }

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &other ) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter( void ) { }

static etype	detectType( const std::string &input ) {
	if (input.empty())
		throw std::invalid_argument("Empty " YELLOW "\"input\"");

	if (input.length() == 1 && std::isdigit(input[0]) == false)
		return CHAR;

	if (input == "-inff" || input == "+inff"
			|| input == "inff" || input == "nanf")
		return FLOAT;
	if (input == "-inf" || input == "+inf"
			|| input == "inf" || input == "nan")
		return DOUBLE;

	return OTHER;
}

static void	convertChar( int alpha ) {
	if (alpha < std::numeric_limits<char>::min()
			|| alpha > std::numeric_limits<char>::max())
		std::cout << "char: Impossible";
	else if (isprint(alpha))
		std::cout << "char: '" << static_cast<char>(alpha) << "'";
	else
		std::cout << "char: Non displayable";
	std::cout << std::endl;
}

static void	convertInt( double num ) {
	if (num >= static_cast<double>(std::numeric_limits<int>::min()) &&
		num <= static_cast<double>(std::numeric_limits<int>::max()))
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

static void	printBlocks( double &num ) {
	convertChar(static_cast<int>(num)), convertInt(num);

	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << num << std::endl;
}

static void	convertFloat( const std::string &input ) {
	std::stringstream	inputStream(input);
	float				num;

	inputStream >> num;

	if (inputStream.fail())
		throw std::runtime_error("Float value out of range.");

	convertChar(static_cast<int>(num));
	convertInt(static_cast<float>(num));

	std::cout << "float: " << num << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;

	std::exit(EXIT_SUCCESS);
}

void	ScalarConverter::convert( const std::string &input ) {
	etype type = detectType(input);

	std::cout << std::fixed << std::setprecision(1);
	
	if (type == CHAR) {
		char	alpha = static_cast<char>(input[0]);

		convertChar(alpha);
		std::cout << "int: " << static_cast<int>(alpha) << std::endl;
		std::cout << "float: " << static_cast<float>(alpha) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(alpha) << std::endl;
		return ;
	}

	char	*endptr;
	double	num = std::strtod(input.c_str(), &endptr);

	if (endptr && *endptr != '\0' && !(endptr[0] == 'f' && endptr[1] == '\0'))
		throw std::runtime_error("Invalid scalar format!");

	if (*endptr == 'f' && type == OTHER)
		convertFloat(input);

	if (input.find(".") != std::string::npos || type == DOUBLE || type == FLOAT) {
		if (errno == ERANGE)
			throw std::runtime_error("Double value out of range.");
		printBlocks(num);
		return ;
	}

	if ((num < static_cast<double>(std::numeric_limits<int>::min())
			|| num > static_cast<double>(std::numeric_limits<int>::max())))
		throw std::runtime_error("Int value out of range.");

	printBlocks(num);
}
