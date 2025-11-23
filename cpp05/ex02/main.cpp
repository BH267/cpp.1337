#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));

    try
    {
        Bureaucrat ceo("Zaphod", 1);
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Ford");

        // Signing
        ceo.signForm(shrub);
        ceo.signForm(robot);
        ceo.signForm(pardon);

        // Executing
        ceo.executeForm(shrub);
        ceo.executeForm(robot);
        ceo.executeForm(pardon);

        // Test failure: low-grade bureaucrat
        Bureaucrat intern("Intern", 150);
        ShrubberyCreationForm shrub2("garden");
        intern.signForm(shrub2); // fails
        intern.executeForm(shrub2); // fails
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
