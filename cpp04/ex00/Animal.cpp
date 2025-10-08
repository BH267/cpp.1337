#include "Animal.hpp"
#include <iostream>
#include <ostream>
#include <string>

Animal::Animal() : type("< no Type >")
{
	std::cout << "An Animal Created" << std::endl;
}

Animal::Animal(const Animal& other)
{
	setType(other.getType());
	std::cout << "Animal's copy constructer called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		setType(other.getType());
	return *this;
}

Animal::~Animal()
{
	std::cout << "An Animal Destroyed" << std::endl;
}

std::string	Animal::getType(void) const {return type;}
void		Animal::setType(std::string s) {type = s;}

void		Animal::makeSound() const
{
	std::cout << "< No Defult Sound >" << std::endl;
}
