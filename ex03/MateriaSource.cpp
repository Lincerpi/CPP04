#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{}

MateriaSource::~MateriaSource()
{}

MateriaSource::MateriaSource(const MateriaSource&)
{}

MateriaSource& MateriaSource::operator=(const MateriaSource&)
{}

void MateriaSource::learnMateria(AMateria*)
{}

AMateria* MateriaSource::createMateria(std::string const & type)
{}