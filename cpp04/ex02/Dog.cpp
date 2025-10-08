#include "Dog.hpp"
#include <iostream>
#include <ostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "A Dog Created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A Dog Destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "  wolf~" << std::endl;
}
