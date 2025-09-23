#include "Weapon.hpp"
#include <iostream>
#include <ostream>
#include <string>

Weapon::Weapon()
	{std::cout << "a weapon created." << std::endl;}

Weapon::Weapon(std::string awdi)
{
	setType(awdi);
	std::cout << "a weapon created." << std::endl;
}

Weapon::~Weapon()
	{std::cout << "the weapon are destroyed." << std::endl;}

const std::string&	Weapon::getType(void)
	{return type;}

void		Weapon::setType(std::string t)
	{type = t;}
