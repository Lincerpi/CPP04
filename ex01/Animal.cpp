#include "Animal.hpp"

Animal::Animal()
{
	type = "Empty Type!";
	std::cout << "Costructor Animal!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Call destructor Animal!" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "copy animal" << std::endl;
	type = copy.type;
}

void	Animal::operator=(const Animal& op)
{
	std::cout << "assignment" << std::endl;
	type = op.type;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Class Animal don't make sound!" << std::endl;
}