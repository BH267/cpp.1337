#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

ScavTrap::ScavTrap()
{
	hit_p = 100;
	energy_p = 50;
	attack_damage = 20;
	std::cout << "\033[38;2;59;59;59mScavTrap's default Constactor called\033[0m\n";
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	hit_p = 100;
	energy_p = 50;
	attack_damage = 20;
	std::cout << "\033[38;2;59;59;59mScavTrap's Constactor called\033[0m\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[38;2;59;59;59mScavTrap's Destracotor called\033[0m\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (0< hit_p  && energy_p >0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
		energy_p--;
	}
}

void	ScavTrap::guardGate(void)
{ 
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
