#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure&): AMateria("cure")
{}

Cure& Cure::operator=(const Cure&)
{}

AMateria* Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

