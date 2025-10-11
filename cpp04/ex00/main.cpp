#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Correct Polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // cat sound
    j->makeSound(); // dog sound
    meta->makeSound(); // animal sound (or empty)

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong Polymorphism (no virtual) ===" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();

    std::cout << wcat->getType() << std::endl;
    wcat->makeSound(); // should output WrongAnimal sound (not cat)

    delete wmeta;
    delete wcat;

    return 0;
}
