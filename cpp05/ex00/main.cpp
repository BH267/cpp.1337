#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 150);
        std::cout << bob << std::endl;

        bob.incGrade(); // 149
        std::cout << bob << std::endl;

        Bureaucrat alice("Alice", 1);
        alice.decGrade(); // 2
        std::cout << alice << std::endl;

        Bureaucrat invalid1("TooHigh", 0); // Should throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat invalid2("TooLow", 151); // Should throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
