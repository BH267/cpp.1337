#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>
#include <iostream>
#include <ostream>
#include <string>

Bureaucrat::Bureaucrat() : name("no name"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	else if (g > 150)
		throw GradeTooLowException();
	grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
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

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << *this << "  couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form) const
{
	try {
		form.execute(*this);
		std::cout << *this << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << *this << "  couldn’t execut " << form.getName() << " because " << e.what() << std::endl;
	}
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
