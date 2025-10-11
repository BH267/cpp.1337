#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		void makeSound() const;
};
