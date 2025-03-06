#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm & );
		RobotomyRequestForm&		operator=( const RobotomyRequestForm & );
		~RobotomyRequestForm( void );

		RobotomyRequestForm( const std::string & );
		void						execute( Bureaucrat const & ) const;

	private:
		std::string	        		target;
};

#endif
