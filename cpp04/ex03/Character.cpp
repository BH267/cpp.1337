#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <ostream>

Character::Character() : Name("unknown")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "A character created (without name)" << std::endl;
}

Character::Character(std::string n) : Name(n)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "A character created with name :" << Name << std::endl;
}

Character::Character(const Character& other) : Name(other.getName())
{
	for (int i = 0; i < 4; i++)
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
	std::cout << "A character created with name :" << Name << "(via a copy constructor)"<< std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		Name = other.getName();
		for (int i = 0; i < 4; i++)
			if (other.inventory[i])
			{
				delete	inventory[i];
				inventory[i] = other.inventory[i]->clone();
			}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
	std::cout << "A character destroyed" << std::endl;
}

std::string const& Character::getName() const
{return Name;}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx <= 3 && inventory[idx])
		inventory[idx]->use(target);
}
