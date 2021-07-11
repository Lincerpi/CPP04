#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
		int amount;
		AMateria *source[4];
		
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource& operator=(const MateriaSource&);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
