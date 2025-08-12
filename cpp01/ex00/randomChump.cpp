#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie	zombo;

	zombo.set_name(name);
	zombo.announce();
}
