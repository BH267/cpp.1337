#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string);
		~FragTrap();

		void highFivesGuys(void);
		
};
