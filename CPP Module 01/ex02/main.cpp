# include <iostream>

int		main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "STRING ADDRESS: " << &string << std::endl;
	std::cout << "STRINGPTR ADDRESS: " << stringPTR << std::endl;
	std::cout << "STRINGREF ADDRESS: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "STRING VALUE: " << string << std::endl;
	std::cout << "STRINGPTR VALUE: " << *stringPTR << std::endl;
	std::cout << "STRINGREF VALUE: " << stringREF << std::endl;
}
