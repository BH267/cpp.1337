#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

FragTrap::FragTrap()
{
	std::cout << "\033[38;2;59;59;59mFragTrap's default Constactor called\033[0m\n";
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	hit_p = 100;
	energy_p = 100;
	attack_damage = 30;
	std::cout << "\033[38;2;59;59;59mFragTrap's Constactor called\033[0m\n";
}

FragTrap::~FragTrap()
{
	std::cout << "\033[38;2;59;59;59mFragTrap's Destracotor called\033[0m\n";
}

void	FragTrap::highFivesGuys(void)
{ 
	std::cout << "FragTrap " << name << " says: Hey! High five? ✋" << std::endl;
}
