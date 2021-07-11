#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(const Ice&): AMateria("ice")
{}

Ice& Ice::operator=(const Ice&)
{}

AMateria* Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}