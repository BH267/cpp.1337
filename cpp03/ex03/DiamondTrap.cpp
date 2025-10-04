#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

DiamondTrap::DiamondTrap() : name("")
{
	hit_p = 100;
	energy_p = 50;
	attack_damage = 30;
	std::cout << "\033[38;2;59;59;59mDiamondTrap's default Constactor called\033[0m\n";
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n+"_clap_name"), ScavTrap(n), FragTrap(n), name(n)
{
	hit_p = 100;
	energy_p = 50;
	attack_damage = 30;
	std::cout << "\033[38;2;59;59;59mDiamondTrap's Constactor called\033[0m\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[38;2;59;59;59mDiamondTrap's Destracotor called\033[0m\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hi! my name is " << name 
		<< " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
