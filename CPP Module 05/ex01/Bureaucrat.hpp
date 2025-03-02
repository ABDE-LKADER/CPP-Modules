#ifndef BUREACRAT_CPP
# define BUREACRAT_CPP

# include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat & );
		Bureaucrat&		operator=( const Bureaucrat & );
		~Bureaucrat( void );

		Bureaucrat( const std::string & , short );
		std::string		getName( void ) const;
		int				getGrade( void ) const;

		Bureaucrat		operator++( int );
		Bureaucrat		operator--( int );
		void			signForm( Form & );

		class GradeTooLowException : public std::exception {
			public: const char*	what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public: const char*	what() const throw();
		};

	private:
		std::string		name;
		short			grade;
};

std::ostream&	operator<<( std::ostream & , const Bureaucrat & );

#endif
