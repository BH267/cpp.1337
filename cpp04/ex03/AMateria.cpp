#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <ostream>

AMateria::AMateria() : Type("< no Type >")
{
	std::cout << "an empty materia created" << std::endl;
}

AMateria::AMateria(std::string const & type) : Type(type)
{
	std::cout << "a/an "<< Type <<" materia created via a constructor" << std::endl;
}

AMateria::AMateria(const AMateria& other) : Type(other.getType())
{
	std::cout << "a/an "<< Type <<" materia created via the copy constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "a/an "<< Type <<" materia destroyed" << std::endl;
}

std::string const &AMateria::getType() const {return Type;}
void AMateria::use(ICharacter& target) {(void)target;}
