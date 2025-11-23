#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	
	std::string _target;

public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
	~RobotomyRequestForm();

	void execute(const Bureaucrat &) const;
	
};
