#ifndef BUREACRAT_CPP
# define BUREACRAT_CPP

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat & );
		Bureaucrat&		operator=( const Bureaucrat & );
		~Bureaucrat( void );

		std::string		getName( void ) const;
		int				getGrade( void ) const;

		Bureaucrat		operator++( int );
		Bureaucrat		operator--( int );

	private:
		std::string		name;
		short			grade;	//	1 IS HIGHTEST GRADE - 150 IS LOWEST GRADE
};

std::ostream&	operator<<( std::ostream & , const Bureaucrat & );

#endif
