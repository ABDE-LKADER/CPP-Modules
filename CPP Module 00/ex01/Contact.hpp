#ifndef CONTACT_H
# define CONTACT_H

#include <sstream>
#include <iostream>

class Contact
{
	public:
		const std::string	getatt(char const &mode) ;
		void				showContact(void);
		const bool			isEmpty(void);
		void				setatt(std::string const &Value, char const &mode);
	private:
		std::string			firstName;
		std::string			lastName;
		std::string			nickName;
		std::string			phoneNumber;
		std::string			darkestSecret;
};

#endif
