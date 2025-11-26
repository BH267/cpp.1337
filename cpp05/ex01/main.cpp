#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat alice("Alice", 81);
        Form form1("Tax Form", 80, 50);

        std::cout << form1 << std::endl;
        alice.signForm(form1); // Alice grade 81 > 80 → fail

        Bureaucrat bob("Bob", 75);
        bob.signForm(form1); // Bob grade 75 < 80 → success
        std::cout << form1 << std::endl;

        Form form2("Impossible Form", 0, 100); // Invalid grade → throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
