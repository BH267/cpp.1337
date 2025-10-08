#include "Brain.hpp"
#include <iostream>
#include <ostream>

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "a Brain Created" << std::endl;
}

Brain::Brain(const Brain& other)
{
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	delete[] ideas;
	std::cout << "a Brain Destroyed" << std::endl;
}
