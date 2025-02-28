#ifndef FORM_CPP
# define FORM_CPP

# include "Bureaucrat.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat;

class Form
{
	public:
		Form( void );
		Form( const Form & );
		Form&				operator=( const Form & );
		~Form( void );

		std::string			getName( void ) const;
		bool				getStatus( void ) const;
		int					getSingGrade( void ) const;
		int					getExecGrade( void ) const;

		void				beSigned( const Bureaucrat & );

		class GradeTooLowException : public std::exception {
			public: const char*	what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public: const char*	what() const throw();
		};

	private:
		const std::string	name;
		bool				approved;
		const int			signGrade;
		const int			execGrade;
};

std::ostream&	operator<<( std::ostream & , const Form & );

#endif
