#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	AMateria();

protected:
	std::string type;

public:
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif