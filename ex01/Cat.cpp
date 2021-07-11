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

Cat& Cat::operator=(const Cat& op)
{
	if (this == &op)
		return (*this);
	std::cout << "Copy Cat!" << std::endl;
	delete this->brain;
	brain = new Brain(*op.brain);
	return (*this);

}


void	Cat::makeSound() const
{
	std::cout << "Io sono un gatto!" << std::endl;
}