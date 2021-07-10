#include "Animal.hpp"

Animal::Animal()
{
	type = ("Empty Type!");
}

Animal::~Animal()
{}

Animal::Animal(const Animal&)
{}

void	Animal::operator=(const Animal&)
{}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
}