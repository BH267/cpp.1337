#include "MateriaSource.hpp"
#include <iostream>
#include <ostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = 0;
	std::cout << "A MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i];
	std::cout << "A MateriaSource created via the copy constructor" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
		for (int i = 0; i < 4; i++)
		{
			delete materias[i];
			materias[i] = other.materias[i];
		}
	return *this;
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete materias[i];
	std::cout << "A MateriaSource destroyed" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
		for (int i = 0; i < 4; i++)
			if (materias[i] == 0)
			{
				materias[i] = m->clone();
				delete m;
				break;
			}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
		for (int i = 0; i < 4; i++)
			if (materias[i] && materias[i]->getType() == type)
				return materias[i]->clone();
		return 0;
}
