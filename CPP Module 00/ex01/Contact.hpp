#ifndef CONTACT_H
# define CONTACT_H

#include "main.hpp"

class Contact
{
	public:
		std::string	getatt(char mode) const;
		void		showContact(void);
		bool		isEmpty(void) const;
		void		setatt(std::string& Value, char mode);
	private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif
