// main.cpp for Exercise 00
#include <iostream>
#include "Fixed.hpp" // or "Fixed.h", depending on your file

int main(void)
{
    std::cout << "=== TESTING EXERCISE 00 ===" << std::endl;

    // 1. Test Default Constructor
    std::cout << "\n--- 1. Creating 'a' with default constructor ---" << std::endl;
    Fixed a;
    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl; // Should be 0

    // 2. Test Copy Constructor
    std::cout << "\n--- 2. Creating 'b' as a copy of 'a' ---" << std::endl;
    Fixed b(a);
    std::cout << "b.getRawBits() = " << b.getRawBits() << std::endl; // Should be 0

    // 3. Test setRawBits on 'a'
    std::cout << "\n--- 3. Setting raw bits of 'a' to 42 ---" << std::endl;
    a.setRawBits(42);
    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl; // Should be 42
    std::cout << "b.getRawBits() = " << b.getRawBits() << std::endl; // Should STILL be 0 (b is a separate copy)

    // 4. Test Copy Assignment Operator
    std::cout << "\n--- 4. Assigning 'b' to 'a' (b = a) ---" << std::endl;
    b = a;
    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl; // Should be 42
    std::cout << "b.getRawBits() = " << b.getRawBits() << std::endl; // Should NOW be 42

    // 5. Test setRawBits on 'b'
    std::cout << "\n--- 5. Setting raw bits of 'b' to 84 ---" << std::endl;
    b.setRawBits(84);
    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl; // Should STILL be 42
    std::cout << "b.getRawBits() = " << b.getRawBits() << std::endl; // Should be 84

    // 6. Create another object with default constructor and test assignment
    std::cout << "\n--- 6. Creating 'c' with default constructor ---" << std::endl;
    Fixed c;
    std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl; // Should be 0

    std::cout << "\n--- 6b. Assigning 'a' to 'c' (c = a) ---" << std::endl;
    c = a;
    std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl; // Should be 42
    std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;

    return 0;
}
