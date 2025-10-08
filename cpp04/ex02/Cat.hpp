#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		~Cat();

		void makeSound() const;
};
