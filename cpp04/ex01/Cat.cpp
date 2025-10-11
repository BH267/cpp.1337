#include "Cat.hpp"
#include <iostream>
#include <ostream>

Cat::Cat()
{
	type = "Cat";
	brain = new Brain;
	std::cout << "A Cat Created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	brain = new Brain;
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = other.getBrain()->ideas[i];
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		setType(other.getType());
		for (int i = 0; i < 100; i++)
			brain->ideas[i] = other.getBrain()->ideas[i];
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "A Cat Destroyed" << std::endl;
}

Brain*		Cat::getBrain(void) const {return brain;}
void		Cat::setBrain(Brain* b) {brain = b;}

void	Cat::makeSound() const
{
	std::cout << "  meow~" << std::endl;
}
