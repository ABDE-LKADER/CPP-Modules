#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm & );
		PresidentialPardonForm&		operator=( const PresidentialPardonForm & );
		~PresidentialPardonForm( void );

		PresidentialPardonForm( const std::string & );
		void						execute( Bureaucrat const & ) const;

	private:
		std::string			        target;
};

#endif
