#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		~ScavTrap();

		void attack(const std::string&);
		void guardGate(void);
		
};
