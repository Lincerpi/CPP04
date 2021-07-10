#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Call Destructor Brain!" << std::endl;
}

Brain::Brain(const Brain&)
{}

void	Brain::operator =(const Brain &)
{}


