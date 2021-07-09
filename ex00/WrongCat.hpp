#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include <iostream>
#include <ostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat&);
		void operator =(const WrongCat&);
		void	makeSound() const;
};

#endif