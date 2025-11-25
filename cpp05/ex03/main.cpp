#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try
    {
        Intern intern;
        Bureaucrat boss("Boss", 1);

        AForm* form = intern.makeForm("shrubbery creation", "backyard");
        if (form)
        {
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }

        form = intern.makeForm("robotomy request", "Claptrap");
        if (form)
        {
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }

        form = intern.makeForm("presidential pardon", "Marvin");
        if (form)
        {
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }

        // Invalid form
        form = intern.makeForm("coffee request", "breakroom");
        if (!form)
            std::cout << "Form not created." << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
