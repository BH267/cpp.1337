#include "WrongCat.hpp"
#include <iostream>
#include <ostream>

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "A WrongCat Created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat Destroyed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "  !meow" << std::endl;
}
