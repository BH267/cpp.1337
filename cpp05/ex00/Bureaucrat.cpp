#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <ostream>
#include <string>

Bureaucrat::Bureaucrat() : name("no name"), grade(150)
{
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	else if (g > 150)
		throw GradeTooLowException();
	grade = g;
	std::cout << "a constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	std::cout << "copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		grade = other.grade;
	std::cout << "copy assignement called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor called" << std::endl;
}


std::string	Bureaucrat::getName() const {return name;}
int		Bureaucrat::getGrade() const {return grade;}

void    Bureaucrat::incGrade()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	--grade;
}

void    Bureaucrat::decGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	++grade;
}

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}
