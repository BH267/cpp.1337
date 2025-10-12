#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
		AMateria* materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource &operator=(const MateriaSource &);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
