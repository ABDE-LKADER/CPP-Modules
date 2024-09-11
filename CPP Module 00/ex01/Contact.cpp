#include "Contact.hpp"

bool	Contact::isEmpty(void) const
{
	if (this->firstName.empty())
		return (true);
	return (false);
}

void	Contact::setatt(std::string& Value, char mode)
{
	if (mode == 'f') this->firstName = Value;
	else if (mode == 'l') this->lastName = Value;
	else if (mode == 'n') this->nickName = Value;
	else if (mode == 'p') this->phoneNumber = Value;
	else if (mode == 'd') this->darkestSecret = Value;
}

std::string	Contact::getatt(char mode) const
{
	if (mode == 'f') return (this->firstName);
	else if (mode == 'l') return (this->lastName);
	else if (mode == 'n') return (this->nickName);
	else if (mode == 'p') return (this->phoneNumber);
	else return (this->darkestSecret);
}

void		Contact::showContact(void)
{
	std::cout << std::endl;
	std::cout << "\tContact details: " << std::endl;
	std::cout << "\t  First Name: " << "[" + this->firstName + "]" << std::endl;
	std::cout << "\t  Last Name: " << "[" + this->lastName + "]" << std::endl;
	std::cout << "\t  Nickname: " << "[" + this->nickName + "]" << std::endl;
	std::cout << "\t  Phone Number: " << "[" + this->phoneNumber + "]" << std::endl;
	std::cout << "\t  Darkest Secret: " << "[" + this->darkestSecret + "]" << std::endl;
	std::cout << std::endl;
}
