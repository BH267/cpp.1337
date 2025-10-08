#pragma once 

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
		Brain*	brain;
	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();

		std::string	getType(void) const;
		void	setType(std::string);
		Brain* getBrain() const;
		void setBrain(Brain*);

		virtual void makeSound(void) const;
};
