#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
		
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& copy);
		void operator=(const Animal & op);
		std::string	getType() const;
		virtual void makeSound() const;
};

#endif