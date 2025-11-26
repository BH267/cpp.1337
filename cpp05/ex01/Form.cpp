#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>
#include <string>

Form::Form() : _name(""), _isSigned(0), _gradToSign(150), _gradToExec(150)
{}

Form::Form(std::string name, int gts, int gtx) : _name(name), _isSigned(0), _gradToSign(gts), _gradToExec(gtx)
{
	if (gtx < 1 || gts < 1)
		throw GradeTooHighException();
	else if (gtx > 150 || gts > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name), _isSigned(0), _gradToSign(other._gradToSign), _gradToExec(other._gradToExec)
{}

Form	&Form::operator=(const Form& other)
{
	(void) other;
	return (*this);
}

Form::~Form()
{}


std::string	Form::getName() const {return _name;}
bool		Form::getSign() const {return _isSigned;}
int		Form::getGTS() const {return _gradToSign;}
int		Form::getGTE() const {return _gradToExec;}

void	Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() > _gradToSign)
		throw GradeTooLowException();
	_isSigned = 1;
}


const char * Form::GradeTooLowException::what() const throw()
{
	return "Grad too Low";
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grad too High";
}


std::ostream	&operator<<(std::ostream& os, const Form& form)
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
