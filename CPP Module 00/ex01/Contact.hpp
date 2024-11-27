#ifndef CONTACT_H
# define CONTACT_H

#include <sstream>
#include <iostream>

class Contact
{
	public:
		std::string	getatt(char const &mode) const;
		void		showContact(void);
		bool		isEmpty(void) const;
		void		setatt(std::string const &Value, char const &mode);
	private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif
