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
	delete this->brain;
	std::cout << "Call Destructor Dog!" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy Dog!" << std::endl;
	brain = new Brain;
	*brain = *(copy.brain);
}

Dog& Dog::operator=(const Dog& op)
{
	if (this == &op)
		return (*this);
	delete this->brain;
	brain = new Brain(*op.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Io sono un cane!" << std::endl;
}