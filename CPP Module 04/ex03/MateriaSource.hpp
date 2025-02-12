#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource & );
		MateriaSource&		operator=( const MateriaSource & );
		~MateriaSource( void );

		void				learnMateria( AMateria * );
		AMateria*			createMateria( std::string const & );

	private:
		AMateria				*materias[4];
};

#endif
