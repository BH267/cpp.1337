#pragma once 

#include <ostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	std::string const	name;
	int			grade;
	
public:
	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	std::string	getName() const;
	int		getGrade() const;

	void		incGrade();
	void		decGrade();

	void		signForm(AForm &form);
	void		executeForm(AForm const & form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const  throw();
	};

};
std::ostream	&operator<<(std::ostream&, const Bureaucrat&);
