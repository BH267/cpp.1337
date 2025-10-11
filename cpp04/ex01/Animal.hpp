#pragma once 

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();

		std::string	getType(void) const;
		void	setType(std::string);

		virtual void makeSound(void) const;
};
