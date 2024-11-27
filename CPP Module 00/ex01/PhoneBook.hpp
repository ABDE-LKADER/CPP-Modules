#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	searchIn(void);
		void	addContact(void);
	private:
		short			index;
		short			oldest;
		void			drawTable(void);
		void			printRow(std::string const &Value, short const &mode);
		void			addField(std::string const &message, char const &mode);
		bool			validFormat(std::string const &Number, char const &mode);
		Contact			Phones[8];
};

#endif
