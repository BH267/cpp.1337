#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <ostream>

HumanB::HumanB(std::string n) : weapon(NULL), name(n) {}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}

HumanB::~HumanB(void)
{
}
