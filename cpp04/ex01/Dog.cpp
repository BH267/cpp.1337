#include "Dog.hpp"
#include <iostream>
#include <ostream>

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
	std::cout << "A Dog Created" << std::endl;
}

Dog::Dog(const Dog& other)
{
	setType(other.getType());
	brain = new Brain;
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = other.getBrain()->ideas[i];
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		setType(other.getType());
		brain = new Brain;
		for (int i = 0; i < 100; i++)
			brain->ideas[i] = other.getBrain()->ideas[i];
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "A Dog Destroyed" << std::endl;
}

Brain*	Dog::getBrain(void) const {return brain;}
void	Dog::setBrain(Brain* b) {brain = b;}

void	Dog::makeSound() const
{
	std::cout << "  wolf~" << std::endl;
}
