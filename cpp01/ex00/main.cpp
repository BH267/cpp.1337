#include "Zombie.hpp"

int	main ()
{
	// Stack allocation
	Zombie stackZombie("Stack Zombie");
	stackZombie.announce();

	// Heap allocation
	Zombie* heapZombie = newZombie("Heap Zombie");
	heapZombie->announce();

	// Random chump
	randomChump("Random Chump");

	// Clean up heap zombie
	delete heapZombie;
}
