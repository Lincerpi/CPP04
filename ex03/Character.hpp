#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
		std::string name;
		int equipped;
		AMateria *inventory[4];
		Character();

	public:
		Character(std::string const & name);
		virtual ~Character();
		Character(const Character& copy);
		Character& operator=(const Character& op);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif


