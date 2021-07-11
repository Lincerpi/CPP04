#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice&);
		Ice& operator=(const Ice&);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif