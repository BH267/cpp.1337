#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other), _target(other._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	_target = other._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getSign() || executor.getGrade() > getGTE())
		throw GradeTooLowException();

	std::cout << ">>> BRRRRRRT! <<<" << std::endl;
	std::cout << ">>> KRRR-KRRR-KRRR! <<<" << std::endl;
	std::cout << ">>> WHIIIIIRRRRRRRR—CLUNK! <<<" << std::endl;
	std::cout << ">>> ... processing neural override ... <<<" << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << "." << std::endl;

}
