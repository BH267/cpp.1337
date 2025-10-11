#pragma once 

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);
		~WrongAnimal();

		std::string	getType(void) const;
		void	setType(std::string);

		void makeSound(void) const;
};
