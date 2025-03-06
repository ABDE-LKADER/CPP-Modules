#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

struct FormType
{
	std::string		name;
	AForm*			(*form) ( const std::string & );
};

class Intern
{
	public:
		Intern( void );
		Intern( const Intern & );
		Intern&			operator=( const Intern & );
		~Intern( void );

		class InvalidFormException : public std::exception {
			public: const char*	what() const throw();
		};

		AForm*	makeForm( const std::string & , const std::string & );
};

#endif
