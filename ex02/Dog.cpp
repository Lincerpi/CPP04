#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog():
Animal()
{
	Dog::type = "Dog";
}

Dog::~Dog()
{}

Dog::Dog(const Dog&)
{}

void Dog::operator=(const Dog&)
{}

void	Dog::makeSound() const
{
	std::cout << "Io sono un cane!" << std::endl;
}