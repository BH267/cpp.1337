#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class	DiamondTrap : public ScavTrap, public FragTrap
{
	std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string);
		~DiamondTrap();

		void whoAmI(void);
		using ScavTrap::attack;
};
