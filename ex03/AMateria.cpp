#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(std::string const & type):
type(type)
{}

AMateria::AMateria(const AMateria& copy)
{
	this->type = copy.type;
}

AMateria& AMateria::operator=(const AMateria& op)
{
	if (this == &op)
		return (*this);
	type = op.type;
	return(*this);
}

std::string const & AMateria::getType() const
{
	return(type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
