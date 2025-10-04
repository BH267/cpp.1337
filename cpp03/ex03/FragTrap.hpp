#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string);
		~FragTrap();

		void highFivesGuys(void);
		
};
