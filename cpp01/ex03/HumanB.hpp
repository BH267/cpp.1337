#pragma once

#include "Weapon.hpp"
#include <string>

class HumanB {
public:
	Weapon		weapon;
	std::string	name;

	HumanB();
	~HumanB();
	
	void	attack(void);
};
