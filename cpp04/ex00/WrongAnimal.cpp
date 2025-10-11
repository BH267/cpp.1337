#include "WrongAnimal.hpp"
#include <iostream>
#include <ostream>
#include <string>

WrongAnimal::WrongAnimal() : type("< no Type >")
{
	std::cout << "A WrongAnimal Created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	setType(other.getType());
	std::cout << "WrongAnimal's copy constructer called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		setType(other.getType());
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal Destroyed" << std::endl;
}

std::string	WrongAnimal::getType(void) const {return type;}
void		WrongAnimal::setType(std::string s) {type = s;}

void		WrongAnimal::makeSound() const
{
	std::cout << "< No Defult Sound >" << std::endl;
}
