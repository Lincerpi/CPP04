#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
amount(0)
{
	for (int i = 0; i < 4; i++)
		source[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < amount; i++)
		delete source[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy):
amount(0)
{
	for (int i = 0; i < copy.amount; i++)
		learnMateria(copy.source[i]->clone());
	for (int i = 0; i < 4; i++)
		source[i] = nullptr;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < amount; i++)
		delete source[i];
	amount = 0;
	for (int i = 0; i < op.amount; i++)
		learnMateria(op.source[i]->clone());
	for (int i = 0; i < 4; i++)
		source[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (amount  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < amount; i++)
		if (source[i] == m)
			return ;
	source[amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < amount; i++)
		if (source[i]->getType() == type)
			return (source[i]->clone());
	return (nullptr);
}