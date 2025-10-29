#pragma once 

#include <ostream>
#include <string>
#include <exception>

class Bureaucrat : public std::exception {
private:
	std::string const	name;
	int			grade;
	
public:
	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	void GradeTooHighException();
	void GradeTooLowException();
	const char* what() const noexcept;

	std::string	getName() const;
	int		getGrade() const;
	void		setName(std::string);
	void		setGrade(int);

	void		incGrade();
	void		decGrade();
};
std::ostream	&operator<<(std::ostream&, const Bureaucrat&);
