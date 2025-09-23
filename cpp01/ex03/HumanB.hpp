#pragma once

#include "Weapon.hpp"
#include <string>

class HumanB {
	Weapon*		weapon;
	std::string	name;
public:
	HumanB(std::string);
	~HumanB();
	
	void	attack(void);
	void	setWeapon(Weapon&);
};
