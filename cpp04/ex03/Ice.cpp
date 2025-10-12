#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <ostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "an Ice created" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other.getType())
{
	std::cout << "Ice's copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "an Ice destroyed" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
