#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
		Brain*	brain;
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();

		Brain* getBrain() const;
		void setBrain(Brain*);

		void makeSound() const;
};
