#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Empty Type!";
}

WrongAnimal::~WrongAnimal()
{}

WrongAnimal::WrongAnimal(const WrongAnimal&)
{}

void	WrongAnimal::operator=(const WrongAnimal&)
{}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "........Wrong Animal........." << std::endl;
}