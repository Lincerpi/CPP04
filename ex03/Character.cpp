#include "Character.hpp"

Character::Character()
{}

Character::~Character()
{
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
}

Character::Character(std::string const & name):
name(name),
equipped(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(const Character& copy):
name(copy.name),
equipped(0)
{
	for (int i = 0; i < copy.equipped; i++)
		equip(copy.inventory[i]->clone());
	for (int i = equipped; i < 4; i++)
		inventory[i] = nullptr;
}

Character& Character::operator=(const Character& op)
{
	if (this == &op)
		return (*this);
	name = op.name;
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
	for (int i = 0; i < op.equipped; i++)
		equip(op.inventory[i]->clone());
	for (int i = equipped; i < 4; i++)
		inventory[i] = nullptr;
	return(*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	if (equipped == 4 || m == nullptr)
		return ;
	for (int i = 0; i < equipped; i++)
		if (inventory[i] == m)
			return ;
	inventory[equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= equipped || inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		inventory[i] = inventory[i + 1];
		inventory[i + 1] = nullptr;
	}
	equipped--;
}

void Character::use(int idx,ICharacter& target)
{
	if (idx < 0 || idx >= equipped || inventory[idx] == nullptr)
		return ;
	inventory[idx]->use(target);
}
