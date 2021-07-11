#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure& copy): AMateria("cure")
{
	(void)copy;
}

Cure& Cure::operator=(const Cure&)
{
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

