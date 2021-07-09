#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat():
WrongAnimal()
{
	WrongCat::type = "Wrong Cat";
}

WrongCat::~WrongCat()
{}

WrongCat::WrongCat(const WrongCat&)
{}

void WrongCat::operator=(const WrongCat&)
{}

void	WrongCat::makeSound() const
{
	std::string output;
	std::cout << "Io sono un cane o sono un gatto?!" << std::endl;
}