#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

/*
int main()
{
    // === Basic functionality test (from PDF) ===
    std::cout << "=== Basic Test ===" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);  // * shoots an ice bolt at bob *
    me->use(1, *bob);  // * heals bob's wounds *

    delete bob;
    delete me;
    delete src;

    * === Test deep copy of Character ===
    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());

    Character* char1 = new Character("char1");
    tmp = src2->createMateria("ice");
    char1->equip(tmp);
    tmp = src2->createMateria("cure");
    char1->equip(tmp);

    Character* char2 = new Character(*char1);  // copy constructor

    ICharacter* target = new Character("target");
    char1->use(0, *target);  // ice
    char2->use(1, *target);  // cure

    // Modify original — should not affect copy
    char1->unequip(0);
    char2->use(0, *target);  // should still work (deep copy)

    delete target;
    delete char1;
    delete char2;
    delete src2;

    // === Test unequip without leak ===
    std::cout << "\n=== Unequip Test (no leak) ===" << std::endl;
    IMateriaSource* src3 = new MateriaSource();
    src3->learnMateria(new Ice());
    ICharacter* hero = new Character("hero");
    AMateria* ice = src3->createMateria("ice");
    hero->equip(ice);
    hero->use(0, *hero);  // self ice

    // Unequip — Materia is now "on the floor"
    hero->unequip(0);
    // We still have 'ice' pointer → safe to delete
    delete ice;

    delete hero;
    delete src3;

    // === Test unknown materia type ===
    std::cout << "\n=== Unknown Materia Test ===" << std::endl;
    IMateriaSource* src4 = new MateriaSource();
    src4->learnMateria(new Cure());
    AMateria* unknown = src4->createMateria("fire");  // doesn't exist
    if (unknown == 0)
        std::cout << "Correctly returned 0 for unknown type!" << std::endl;
    else
        std::cout << "ERROR: Should return 0!" << std::endl;

    delete src4;

    // === Test full inventory ===
    std::cout << "\n=== Full Inventory Test ===" << std::endl;
    IMateriaSource* src5 = new MateriaSource();
    src5->learnMateria(new Ice());
    ICharacter* fullChar = new Character("full");
    for (int i = 0; i < 5; ++i) {
        AMateria* m = src5->createMateria("ice");
        fullChar->equip(m);  // only first 4 should stick
        if (m && i >= 4) {
            // Slot 4+ should not be equipped → delete manually to avoid leak
            delete m;
        }
    }
    fullChar->use(3, *fullChar);  // last valid slot
    /// Slot 4 was never equipped → no use

  //  delete fullChar;
   // delete src5;

    std::cout << "\n=== All tests completed ===" << std::endl;
    return 0;
}*/

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
