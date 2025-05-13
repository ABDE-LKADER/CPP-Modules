# include "ScalarConverter.hpp"

static etype	detectType( const std::string &input ) {
	if (input.empty())
		throw std::invalid_argument("Empty " YELLOW "\"input\"");
	if (input.length() == 1 && std::isdigit(input[0]) == false)
		return CHAR;
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return FLOAT;
	if (input == "-inf" || input == "+inf" || input == "nan")
		return DOUBLE;
	return NONE;
}

static void	convert_char( int alpha ) {
	std::cout << "" << std::endl;
	if (alpha < 0 || alpha > 127)
		std::cout << "char: Impossible";
	else if (isprint(alpha))
		std::cout << "char: '" << static_cast<char>(alpha) << "'";
	else
		std::cout << "char: Non displayable";
	std::cout << std::endl;
}

static void	convert_float( const std::string &input ) {
	std::stringstream	inputStream(input);
	float				num;
	
	inputStream >> num;
	
	if (inputStream.fail())
		throw std::runtime_error("Invalid float format");

	// std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << num << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;

	std::exit(EXIT_SUCCESS);
}

void	ScalarConverter::convert( const std::string &input ) {
	etype type = detectType(input);

	if (type == CHAR) {
		int	alpha = static_cast<int>(input[0]);

		convert_char(alpha);
		std::cout << "int: " << alpha << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(alpha) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(alpha) << std::endl;
		return ;
	}

	char	*endptr;
	double	num = std::strtod(input.c_str(), &endptr);

	if (endptr && *endptr != '\0' && !(endptr[0] == 'f' && endptr[1] == '\0'))
		throw std::runtime_error("Invalid scalar format!");

	convert_char(static_cast<int>(num));
	if (num >= static_cast<double>(std::numeric_limits<int>::min()) &&
		num <= static_cast<double>(std::numeric_limits<int>::max()))
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	if (*endptr == 'f')
		convert_float(input);
	// if (input.find(".") != std::string::npos)
	// 	std::cout << num << std::endl;
}
