#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <ostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "an Cure created" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other.getType())
{
	std::cout << "Cure's copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "an Cure destroyed" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}
