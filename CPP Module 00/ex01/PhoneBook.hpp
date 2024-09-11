#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "main.hpp"
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	searchIn(void);
		void	addContact(void);
	private:
		short			index;
		short			oldest;
		void			drawTable(void);
		void			printRow(std::string Value, short mode);
		void			addField(const std::string message, char mode);
		bool			validFormat(std::string	Number, char mode);
		Contact			Phones[8];
};

#endif
