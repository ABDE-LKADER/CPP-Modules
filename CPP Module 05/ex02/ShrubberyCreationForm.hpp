#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm & );
		ShrubberyCreationForm&		operator=( const ShrubberyCreationForm & );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm( const std::string & );
		void						execute( Bureaucrat const & ) const;

	private:
		std::string					target;
};

#endif
