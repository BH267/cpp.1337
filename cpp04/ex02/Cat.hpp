#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
		Brain*	brain;
	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();

		Brain* getBrain() const;
		void setBrain(Brain*);

		void makeSound() const;
};
