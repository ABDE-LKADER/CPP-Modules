#ifndef CONTACT_H
# define CONTACT_H

# include <sstream>
# include <iostream>

class Contact
{
	public:
		const std::string	getatt( char const & ) ;
		void				showContact( void );
		bool				isEmpty( void );
		void				setatt( std::string const & , char const & );

	private:
		std::string			firstName;
		std::string			lastName;
		std::string			nickName;
		std::string			phoneNumber;
		std::string			darkestSecret;
};

#endif
