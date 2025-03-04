# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm("Shrubbery", 145, 137), target("default") { }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj )
	: AForm(obj), target(obj.target) { *this = obj; }

ShrubberyCreationForm::~ShrubberyCreationForm( void ) { }

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm &obj ) {
	if (this != &obj) {
		AForm::operator=(obj);
		target = obj.target;
	} return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &name )
	: AForm("Shrubbery", 145, 137), target(name) { }

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {
	if (getStatus() == false)
		throw NotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();

	std::ofstream	outFile(std::string(target + "_shrubbery").c_str());

	if (outFile.fail())
		throw std::ofstream::failure("Error: The ASCII trees have nowhere to grow—file won't open! ");
	outFile <<	"                                   @&  #%                                        \n"
				"                              @#  #@@%@@#@                                       \n"
				"                            ##%%@&# = #                                          \n"
				"                           %&#&&%@ ;  &   @## &%                                 \n"
				"                           #|@  % @ | ~@_:&&%%&@                                 \n"
				"                   &#& #@#   @   %  ;_   %#&                                     \n"
				"                     %#&%&&&@ &__  |   &&# %                                     \n"
				"             #@@&  @%| &% @%@@%  __        #        @&:                          \n"
				"              @@&&  ~  @&#&@%#%    |     =_#:_:_;_#%&##&                         \n"
				"            %& #&%@#  := &  %@ @    | /;/     _\\  %@&&&@%                       \n"
				"             &@@ %% % |    @  ##    |/        &  @@%@% @                         \n"
				"             @@#& #   ;   @    %    |       &##&:=  @&&&%                        \n"
				"            &#&&#~:__~            |       &  ##@&#&%                    %#%%     \n"
				"            @%%%###&    \\          |         &%&%%  @   \\              @%#&%#% \n"
				"              #%  %#     /;:_~:=___:         & &_#_;_#__ \\~        /#@/#&&&&    \n"
				"               :_~    //:          ;~         /=            :__=;:// &%&@%%% #   \n"
				"                  ~_=~               \\=     ;/                :     &_#%& #%&#  \n"
				"                                      \\   /=         &  @    |    & =%##\\ @    \n"
				"                                        \\=/         @%&#%@   /|   %@@&%&&       \n"
				"                                        /\\         @&@&&@@%|     %##&#          \n"
				"                                        ;||             %#@&|/   @ &             \n"
				"                                        :||            &%%@#                     \n"
				"                                        |||             @%#@&&                   \n"
				"                                       ||=              % @ &%&                  \n"
				"                                       |||                &&                     \n"
				"                                       |||                                       \n"
				"                           \\_________./||:\\.-._______/                         \n"
				"                            \\      . *              /                           \n"
				"                             \\_____________________/                            \n"
				"                               ‾                 ‾                               \n";
	outFile.close();
}
