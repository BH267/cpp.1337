#pragma once

#include <exception>
#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
	std::string const	_name;
	bool			_isSigned;
	int	const		_gradToSign;
	int	const		_gradToExec;
public:
	Form();
	Form(std::string, int, int);
	Form(const Form &);
	Form &operator=(const Form &);
	~Form();

	std::string	getName() const;
	bool		getSign() const;
	int		getGTS() const;
	int		getGTE() const;

	void	beSigned(Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};
std::ostream	&operator<<(std::ostream&, const Form&);
