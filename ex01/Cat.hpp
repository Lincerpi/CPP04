#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
		Brain* brain;

	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& copy);
		void operator =(const Cat& op);
		void	makeSound() const;
};

#endif