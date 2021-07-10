#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog():
Animal()
{
	std::cout << "New Dog created!" << std::endl;
	Dog::type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Call Destructor Dog!" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy Dog!" << std::endl;
	brain = new Brain;
	*brain = *(copy.brain);
}

void Dog::operator=(const Dog& op)
{
	std::cout << "Copy Dog!" << std::endl;
	brain = op.brain;
}

void	Dog::makeSound() const
{
	std::cout << "Io sono un cane!" << std::endl;
}