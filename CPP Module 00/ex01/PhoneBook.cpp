#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) { this->index = 0; this->oldest = 1; }

PhoneBook::~PhoneBook(void) { }

bool	PhoneBook::validFormat(const std::string Number, char mode)
{
	const std::string	oModes = "fln";
	const std::string	validNums = " -0123456789";
	const std::string	validNames = " ._-ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'";

	if ((mode == 'f' || mode == 'l') && Number.find_first_not_of(validNames) != std::string::npos)
		return false;
	if (mode == 'n' && Number.find_first_not_of(validNames + validNums) != std::string::npos)
		return false;
	if (mode == 'p' && Number.find_first_not_of(validNums + "+()") != std::string::npos)
		return false;
	return (true);
}

void	PhoneBook::addField(const std::string message, char mode)
{
	std::string	Value;
	std::string	newMess;

	newMess = "  Enter the " + message;
	while (!std::cin.eof())
	{
		std::cout << newMess + " : ";
		getline(std::cin, Value);
		if (std::cin.eof())
			break ;
		if (Value.empty() || !this->validFormat(Value, mode))
		{
			newMess = "  The " + message;
			if (Value.empty()) newMess += " is Required";
			else newMess += " is Invalid";
			continue ;
		}
		this->Phones[index].setatt(Value, mode);
		break ;
	}
}

void	PhoneBook::addContact(void)
{
	if (this->oldest == 0)
		std::cout << std::endl << ISFULL << std::endl;
	std::cout << std::endl;
	addField("first name", 'f');
	addField("last name", 'l');
	addField("nickname", 'n');
	addField("phone number", 'p');
	addField("darkest secret", 'd');
	std::cout << std::endl;
	this->index = (this->index + 1) % 8;
	this->oldest = this->index;
}

void	PhoneBook::printRow(std::string Value, short mode)
{
	if (Value.length() > 10)
		std::cout << std::right << std::setw(10) << Value.substr(0, 9) + ".";
	else std::cout << std::right << std::setw(10) << Value;
	if (mode == pipe) std::cout << " | ";
	if (mode == line) std::cout << std::endl;
}

void	PhoneBook::drawTable(void)
{
	std::cout << std::endl;
	if (!this->Phones[0].isEmpty())
	{
		printRow("Index", pipe);
		printRow("First Name", pipe);
		printRow("Last Name", pipe);
		printRow("Nickname", line);
		for (short index = 0; index < 8; index++)
		{
			if (this->Phones[index].isEmpty()) break ;
			std::cout << std::right << std::setw(10) << index + 1 << " | ";
			printRow(this->Phones[index].getatt('f'), pipe);
			printRow(this->Phones[index].getatt('l'), pipe);
			printRow(this->Phones[index].getatt('n'), line);
		}
	}
	else std::cout << EMPTY << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::searchIn(void)
{
	short				index;
	std::string			Value;
	std::stringstream	toIndex;

	this->drawTable();
	if (!this->Phones[0].isEmpty())
	{
		std::cout << SELECT;
		getline(std::cin, Value);
		toIndex << Value;
		toIndex >> index;
		if (Value.length() == 1 && !std::cin.eof() && index > 0 && index < 10)
		{
			if (this->Phones[index - 1].isEmpty())
				std::cout << ENTRY + Value + "] is blank." << std::endl;
			else this->Phones[index - 1].showContact();
		}
		else if (!std::cin.eof())
			std::cout << ">  Invalid index: [" + Value + RANGE << std::endl;
	}
}
