#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	
	std::string	_target;
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	~PresidentialPardonForm();

	void execute(const Bureaucrat &) const;
	
};
