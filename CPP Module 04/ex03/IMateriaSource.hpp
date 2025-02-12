#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource
{
	public:
		virtual ~IMateriaSource( void ) {}

		virtual void		learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const & ) = 0;
};

#endif
