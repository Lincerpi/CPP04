#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat():
Animal()
{
	Cat::type = "Cat";
}

Cat::~Cat()
{}

Cat::Cat(const Cat&)
{}

void Cat::operator=(const Cat&)
{}

void	Cat::makeSound() const
{
	std::cout << "Io sono un gatto!" << std::endl;
}