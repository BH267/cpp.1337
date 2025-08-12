#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zomb = new Zombie;
	zomb->set_name(name);
	return zomb;
}
