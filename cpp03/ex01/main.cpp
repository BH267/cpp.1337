#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap scav("ScavBot");

    scav.attack("Intruder");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();

    // Test energy/hp limits
    for (int i = 0; i < 50; ++i)
        scav.attack("Drone");

    scav.guardGate(); // should still work even with 0 energy (doesn't cost energy)
    scav.beRepaired(10);

    return 0;
}
