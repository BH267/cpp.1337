#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

/*
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
}*/

int main()
{
    std::cout << "=== Abstract Animal Test ===" << std::endl;
    // const Animal* meta = new Animal(); // ← This must NOT compile!

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Cat c1;
    c1.getBrain()->ideas[3] = "Milk!";
    Cat c2 = c1;
    c2.getBrain()->ideas[3] = "Fish!";

    std::cout << "Cat1 idea: " << c1.getBrain()->ideas[3] << std::endl;
    std::cout << "Cat2 idea: " << c2.getBrain()->ideas[3] << std::endl;

    return 0;
}
