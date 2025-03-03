#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
# include <iomanip>
# include <ctime>

# define MAX_GRADE 1
# define MIN_GRADE 150

short	genGrade( void );

class Bureaucrat;

class Form
{
	public:
		Form( void );
		Form( const Form & );
		Form&				operator=( const Form & );
		~Form( void );

		Form( const std::string & , short, short );
		std::string			getName( void ) const;
		bool				getStatus( void ) const;
		short				getSingGrade( void ) const;
		short				getExecGrade( void ) const;

		void				beSigned( const Bureaucrat & );

		class GradeTooLowException : public std::exception {
			public: const char*	what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public: const char*	what() const throw();
		};

		class AlreadySignedException : public std::exception {
			public: const char*	what() const throw();
		};

	private:
		const std::string	name;
		bool				isSigned;
		const short			signGrade;
		const short			execGrade;
};

std::ostream&	operator<<( std::ostream & , const Form & );

#endif
