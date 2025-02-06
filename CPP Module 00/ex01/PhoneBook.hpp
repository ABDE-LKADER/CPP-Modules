#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook( void );
		void	searchIn( void );
		void	addContact( void );
	private:
		short			index;
		short			oldest;
		void			drawTable( void );
		void			printRow( std::string const & , short const & );
		void			addField( std::string const & , char const & );
		bool			validFormat( std::string const & , char const & );
		Contact			Phones[8];
};

#endif
