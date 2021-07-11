#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{	
		Brain* brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& copy);
		Dog& operator =(const Dog& op);
		void	makeSound() const;
};

#endif