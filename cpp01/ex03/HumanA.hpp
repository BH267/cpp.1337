#pragma once

#include "Weapon.hpp"
#include <string>

class HumanA {
public:
	Weapon		weapon;
	std::string	name;

	HumanA(Weapon w);
	~HumanA();
	
	void	attack(void);
};
