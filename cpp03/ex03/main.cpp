#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    DiamondTrap diamond("DiamondDude");

    diamond.whoAmI();
    diamond.attack("MegaTarget");
    diamond.takeDamage(50);
    diamond.beRepaired(30);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    DiamondTrap copy = diamond;
    copy.whoAmI();
    copy.attack("CopyTarget");

    return 0;
}
