#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <ostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("presidential pardon form", 25, 5) , _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other), _target(other._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	_target = other._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!getSign() || executor.getGrade() > getGTE())
		throw GradeTooLowException();
	std::cout << " Zaphod Beeblebrox pardoned " << _target << std::endl; 
}
