#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 75);
        Form form1("Tax Form", 80, 50); // sign:80, exec:50

        std::cout << form1 << std::endl;
        bob.signForm(form1); // Bob grade 75 < 80 → fail

        Bureaucrat alice("Alice", 81);
        alice.signForm(form1); // Alice grade 80 ≥ 80 → success
        std::cout << form1 << std::endl;

        Form form2("Impossible Form", 0, 100); // Invalid grade → throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
