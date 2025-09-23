#pragma once

#include "Weapon.hpp"
#include <string>

class HumanA {
	Weapon&		weapon;
	std::string	name;
public:

	HumanA(std::string, Weapon&);
	
	void	attack(void);
};
