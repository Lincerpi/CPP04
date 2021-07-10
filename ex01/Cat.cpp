#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat():
Animal()
{
	std::cout << "New Cat created!" << std::endl;
	Cat::type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Call Destructor Cat!" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Copy Cat!" << std::endl;
	brain = new Brain;
	*brain = *(copy.brain);
}

void Cat::operator=(const Cat& op)
{
	std::cout << "Copy Cat!" << std::endl;
	brain = op.brain;
}


void	Cat::makeSound() const
{
	std::cout << "Io sono un gatto!" << std::endl;
}