#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <ctime>

# define MAX_GRADE 1
# define MIN_GRADE 150

short	genGrade( void );

class Bureaucrat;

class AForm
{
	public:
		AForm( void );
		AForm( const AForm & );
		AForm&				operator=( const AForm & );
		~AForm( void );

		AForm( const std::string & , short, short );
		std::string			getName( void ) const;
		bool				getStatus( void ) const;
		short				getSingGrade( void ) const;
		short				getExecGrade( void ) const;

		void				beSigned( const Bureaucrat & );
		virtual void		execute( Bureaucrat const & ) const = 0;

		class GradeTooLowException : public std::exception {
			public: const char*	what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public: const char*	what() const throw();
		};

		class AlreadySignedException : public std::exception {
			public: const char*	what() const throw();
		};

		class NotSignedException : public std::exception {
			public: const char*	what() const throw();
		};

	private:
		const std::string	name;
		bool				isSigned;
		const short			signGrade;
		const short			execGrade;
};

std::ostream&	operator<<( std::ostream & , const AForm & );

#endif
