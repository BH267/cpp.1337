#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	
	std::string _target;
public:
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &) const;
	
};
