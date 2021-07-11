#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
		std::string ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain&);
		Brain& operator =(const Brain &);
};

#endif