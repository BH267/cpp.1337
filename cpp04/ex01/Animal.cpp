#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <ostream>
#include <string>

Animal::Animal() : type("< no Type >")
{
	brain = new Brain;
	std::cout << "An Animal Created" << std::endl;
}

Animal::Animal(const Animal& other)
{
	setType(other.getType());
	brain = new Brain;
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = other.getBrain()->ideas[i];
	std::cout << "Animal's copy constructer called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		setType(other.getType());
		for (int i = 0; i < 100; i++)
			brain->ideas[i] = other.getBrain()->ideas[i];
	}
	return *this;
}

Animal::~Animal()
{
	delete brain;
	std::cout << "An Animal Destroyed" << std::endl;
}

std::string	Animal::getType(void) const {return type;}
void		Animal::setType(std::string s) {type = s;}

void		Animal::makeSound() const
{
	std::cout << "< No Defult Sound >" << std::endl;
}

Brain*	Animal::getBrain() const {return brain;}
void	Animal::setBrain(Brain* b) {brain = b;}
