#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	int x;
	std::cout << "Array size?" << std::endl;
	std::cin >> x;
	if (x <= 0)
		std::cout << "ERROR" << std::endl;
	const Animal* animal[x];
	// const Animal* i = new Dog();
	// const Animal* j = new Cat();
	int z = 0;
	while (z < x)
	{
		if (z % 2)
		{
			animal[z++] = new Dog();
		}
		else
		{
			animal[z++] = new Cat();
		}
	}
	z = 0;
	while (z < x)
		std::cout << animal[z++] << std::endl;
	z = 0;
	while (z < x)
		delete animal[z++];
	// delete j;//should not create a leak
	// delete i;

	return (0);
}