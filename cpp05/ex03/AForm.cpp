#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>
#include <string>

AForm::AForm() : _name(""), _isSigned(0), _gradToSign(150), _gradToExec(150)
{}

AForm::AForm(std::string name, int gts, int gtx) : _name(name), _isSigned(0), _gradToSign(gts), _gradToExec(gtx)
{
	if (gtx < 1 || gts < 1)
		throw GradeTooHighException();
	else if (gtx > 150 || gts > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : _name(other._name), _isSigned(0), _gradToSign(other._gradToSign), _gradToExec(other._gradToExec)
{}

AForm	&AForm::operator=(const AForm& other)
{
	(void) other;
	return (*this);
}

AForm::~AForm()
{}


std::string	AForm::getName() const {return _name;}
bool		AForm::getSign() const {return _isSigned;}
int		AForm::getGTS() const {return _gradToSign;}
int		AForm::getGTE() const {return _gradToExec;}

void	AForm::beSigned(Bureaucrat & b)
{
	if (b.getGrade() > _gradToSign)
		throw GradeTooLowException();
	_isSigned = 1;
}


const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grad too Low";
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grad too High";
}


std::ostream	&operator<<(std::ostream& os, const AForm& form)
{
	os << "Form " << form.getName();
	if (form.getSign())
		os << " is signed .";
	else
		os << " isn't signed .";
	os << " grad to sign it : " << form.getGTS() << ". ";
	os << " grad to execut it : " << form.getGTE() << ". ";
	return os;
}
