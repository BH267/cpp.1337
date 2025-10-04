#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap frag("FragBot");

    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    // Deplete energy
    for (int i = 0; i < 100; ++i)
        frag.attack("Wall");

    frag.highFivesGuys(); // still works (no energy cost)
    frag.beRepaired(20);

    return 0;
}
