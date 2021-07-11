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
	Cat j = Cat();
	Dog i = Dog();
	int z = 0;
	while (z < x)
	{
		if (z % 2)
			animal[z++] = new Dog(i);
		else
			animal[z++] = new Cat(j);
	}
	z = 0;
	while (z < x)
		std::cout << animal[z++] << std::endl;
	z = 0;
	while (z < x)
		delete animal[z++];

	return (0);
}