#include "Character.hpp"

Character::Character()
{}

Character::~Character()
{}

Character::Character(std::string const & name):
name(name)
{}

Character::Character(const Character& copy)
{

}

Character& Character::operator=(const Character& op)
{

}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx,ICharacter& target)
{
	
}
