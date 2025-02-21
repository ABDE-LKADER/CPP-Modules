# include "Contact.hpp"

bool	Contact::isEmpty( void )
{
	if (firstName.empty())
		return (true);
	return (false);
}

void	Contact::setatt( std::string const &Value, char const &mode )
{
	if (mode == 'f') firstName = Value;
	else if (mode == 'l') lastName = Value;
	else if (mode == 'n') nickName = Value;
	else if (mode == 'p') phoneNumber = Value;
	else if (mode == 'd') darkestSecret = Value;
}

const std::string	Contact::getatt( char const &mode )
{
	if (mode == 'f') return (firstName);
	else if (mode == 'l') return (lastName);
	else if (mode == 'n') return (nickName);
	else if (mode == 'p') return (phoneNumber);
	else return (darkestSecret);
}

void		Contact::showContact( void )
{
	std::cout << std::endl;
	std::cout << "\tContact details: " << std::endl;
	std::cout << "\t  First Name: " << "[" + firstName + "]" << std::endl;
	std::cout << "\t  Last Name: " << "[" + lastName + "]" << std::endl;
	std::cout << "\t  Nickname: " << "[" + nickName + "]" << std::endl;
	std::cout << "\t  Phone Number: " << "[" + phoneNumber + "]" << std::endl;
	std::cout << "\t  Darkest Secret: " << "[" + darkestSecret + "]" << std::endl;
	std::cout << std::endl;
}
