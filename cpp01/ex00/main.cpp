#include "Zombie.hpp"

int	main ()
{
	// Stack allocation (automatic storage)
	Zombie stackZombie("Stack Zombie");
	stackZombie.announce();

	// Heap allocation (dynamic storage)
	Zombie* heapZombie = newZombie("Heap Zombie");
	heapZombie->announce();

	// Random chump (stack allocation inside function)
	randomChump("Random Chump");

	// Clean up heap zombie
	delete heapZombie;
}
