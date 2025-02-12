# include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (size_t idx = 0; idx < 4; idx++)
		materias[idx] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &obj ) {
	for (size_t idx = 0; idx < 4; idx++)
		materias[idx] = obj.materias[idx]->clone();
}

MateriaSource&	MateriaSource::operator=( const MateriaSource &obj ) { 
	if (this == &obj)
		return (*this);
	for (size_t idx = 0; idx < 4; idx++) {
		delete materias[idx];
		materias[idx] = obj.materias[idx]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource( void ) {
	for (size_t idx = 0; idx < 4; idx++)
		delete materias[idx];
}

void	MateriaSource::learnMateria( AMateria *materia ) {
	for (size_t idx = 0; idx < 4; idx++) {
		if (materias[idx] == NULL) {
			materias[idx] = materia;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const &type ) {
	for (size_t idx = 0; idx < 4; idx++) {
		if (materias[idx] == NULL && materias[idx]->getType() == type)
			return (materias[idx]->clone());
	}
	return (NULL);
}
