#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : name(""), hit_p(10), energy_p(10), attack_damage(0)
{std::cout << "\033[38;2;59;59;59mConstactor called\033[0m\n";}

ClapTrap::ClapTrap(std::string n) : name(n), hit_p(10), energy_p(10), attack_damage(0)
{std::cout << "\033[38;2;59;59;59mConstactor called\033[0m\n";}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hit_p(other.hit_p), energy_p(other.energy_p), attack_damage(other.attack_damage)
{std::cout << "\033[38;2;59;59;59mCopy Constactor called\033[0m\n";}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hit_p = other.hit_p;
		energy_p = other.energy_p;
		attack_damage = other.attack_damage;
	}
	std::cout << "\033[38;2;59;59;59mCopy assignement called\033[0m\n";
	return *this;
}

ClapTrap::~ClapTrap()
{std::cout << "\033[38;2;59;59;59mDestracotor called\033[0m\n";}

void	ClapTrap::attack(const std::string& target)
{
	if (0< hit_p  && energy_p >0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
		energy_p--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
		std::cout << "ClapTrap " << name << " get damaged , lost " << amount << " points of damage!\n";
		if (hit_p <= amount) {hit_p = 0;}
		else {hit_p -= amount;}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
		if (energy_p > 0)
		{
			std::cout << "ClapTrap " << name << " repaired " << amount << " points of damage!\n";
			hit_p += amount;
			energy_p--;
		}
}
