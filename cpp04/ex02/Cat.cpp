#include "Cat.hpp"
#include <iostream>
#include <ostream>

Cat::Cat()
{
	type = "Cat";
	std::cout << "A Cat Created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A Cat Destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "  meow~" << std::endl;
}
