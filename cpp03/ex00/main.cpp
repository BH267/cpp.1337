#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap clap("CL4P-TP");

    clap.attack("TargetDummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    // Test energy depletion
    for (int i = 0; i < 10; ++i)
        clap.attack("AnotherDummy");

    // Should not attack or repair when out of energy or HP
    clap.beRepaired(10);
    clap.takeDamage(20); // kill it
    clap.attack("Ghost");

    return 0;
}
