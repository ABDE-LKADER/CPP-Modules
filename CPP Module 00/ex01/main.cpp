#include "main.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	userInput;

	std::cout << GUIDE;
	while (!std::cin.eof())
	{
		std::cout << CHOICE;
		getline(std::cin, userInput);
		if (std::cin.eof() || userInput == "EXIT")
			break ;
		else if (userInput == "ADD") phoneBook.addContact();
		else if (userInput == "SEARCH") phoneBook.searchIn();
		else std::cout << INVALID << std::endl;
	}
	if (std::cin.eof()) std::cout << std::endl;
	return (std::cout << EXITING << std::endl, 0);
}
