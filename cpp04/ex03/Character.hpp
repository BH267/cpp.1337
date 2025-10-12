#pragma once

#include "ICharacter.hpp"
#include <string>

class	Character : public ICharacter
{
	private:
		std::string Name;
		AMateria* inventory[4];
	public:
		Character();
		Character(std::string);
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();

		std::string const &getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};
