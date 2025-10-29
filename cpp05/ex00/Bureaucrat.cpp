#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat() : name("no name"), grade(150)
{
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g > 150 || 1 > g )
		throw GradeTooHighException();
	std::cout << "default constructor called" << std::endl;
}

void Bureaucrat::GradeTooHighException() {
	message("Grade too high");
}
