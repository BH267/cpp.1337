#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Array of Animals ===" << std::endl;
    const int N = 6;
    Animal* animals[N];

    for (int i = 0; i < N / 2; ++i)
        animals[i] = new Dog();
    for (int i = N / 2; i < N; ++i)
        animals[i] = new Cat();

    std::cout << "\n=== Testing Deep Copy ===" << std::endl;
    Dog original;
    original.getBrain()->ideas[0] = "I love bones!";
    Dog copy = original; // copy constructor
    copy.getBrain()->ideas[0] = "I love treats!";

    std::cout << "Original: " << original.getBrain()->ideas[0] << std::endl;
    std::cout << "Copy:     " << copy.getBrain()->ideas[0] << std::endl;

    // Should be different → deep copy works

    std::cout << "\n=== Cleanup ===" << std::endl;
    for (int i = 0; i < N; i++)
        delete animals[i];

    return 0;
}
