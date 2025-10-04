#pragma once

#include <iostream>
#include <string>

class	ClapTrap
{
	std::string name;
	unsigned int	hit_p;
	unsigned int	energy_p;
	unsigned int	attack_damage;
	public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();
		
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
