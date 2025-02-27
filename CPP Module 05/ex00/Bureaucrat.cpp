# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Bureaucrat"), grade(0) { }

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) { *this = obj; }

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &obj ) {
	name = obj.name;
	grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) { }

Bureaucrat	Bureaucrat::operator++( int ) {
	Bureaucrat	Res;
	Res.grade = grade--;
	return (Res);
}

Bureaucrat	Bureaucrat::operator--( int ) {
	Bureaucrat	Res;
	Res.grade = grade++;
	return (Res);
}

std::ostream&	operator<<( std::ostream &out , const Bureaucrat &obj ) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (out);
}

std::string	Bureaucrat::getName( void ) const {
	return (name);
}

int	Bureaucrat::getGrade( void ) const {
	return (grade);
}
