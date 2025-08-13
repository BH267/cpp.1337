#include "Zombie.hpp"

int main(void) {
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie");

    // Test each zombie in the horde
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    // Clean up the entire horde
    delete[] horde;

    return 0;
}
