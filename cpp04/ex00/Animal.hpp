#pragma once 

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		~Animal();

		std::string	getType(void) const;
		void	setType(std::string);

		virtual void makeSound(void) const;
};
