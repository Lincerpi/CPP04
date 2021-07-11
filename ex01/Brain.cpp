#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Call Destructor Brain!" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	// std::cout << "Copy Brain" << std::endl;
	*this = copy;
}

Brain&	Brain::operator =(const Brain & op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = op.ideas[i];
	return (*this);
}


