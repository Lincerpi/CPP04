#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Type of Dog: " << j->getType() << " " << std::endl;
	std::cout << "Type of Cat: " << i->getType() << " " << std::endl;
	std::cout << "Type of Animal: " << meta->getType() << std::endl; 
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}