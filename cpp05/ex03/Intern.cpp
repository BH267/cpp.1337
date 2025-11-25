#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern&) {}

Intern& Intern::operator=(const Intern&) {return *this;}

Intern::~Intern() {}

typedef struct Forms
{
	std::string name;
	AForm* (*make)(std::string);
} Forms;

static AForm*	makeShrubbery(std::string target) {return new ShrubberyCreationForm(target);}

static AForm*	makeRobotomy(std::string target) {return new RobotomyRequestForm(target);}

static AForm*	makePresidental(std::string target) {return new PresidentialPardonForm(target);}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	Forms	forms[] = {
		{"shrubbery creation", &makeShrubbery},
		{"presidental pardon", &makePresidental},
		{"robotomy request", &makeRobotomy},
	};
	size_t	size = sizeof(forms) / sizeof(forms[0]);

	for (size_t i = 0; i < size; i++)
	{
		if (forms[i].name == name)
		{
			std::cout << "Intern creates " << forms[i].name << std::endl;
			return forms[i].make(target);
		}
	}
	return NULL;
}
