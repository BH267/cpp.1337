#pragma once

#include <iostream>
#include <string>

class Brain
{
	public:
		std::string* ideas;
		Brain();
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain();
};
