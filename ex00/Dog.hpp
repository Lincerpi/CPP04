#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{	
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog&);
		void operator =(const Dog&);
		void	makeSound() const;
};

#endif