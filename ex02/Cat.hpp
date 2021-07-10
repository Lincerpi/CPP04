#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat&);
		void operator =(const Cat&);
		void	makeSound() const;
};

#endif