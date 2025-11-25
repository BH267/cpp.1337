#pragma once

#include <exception>
#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm {
	std::string const	_name;
	bool			_isSigned;
	int	const		_gradToSign;
	int	const		_gradToExec;
public:
	AForm();
	AForm(std::string, int, int);
	AForm(const AForm &);
	AForm &operator=(const AForm &);
	virtual ~AForm();

	std::string	getName() const;
	bool		getSign() const;
	int		getGTS() const;
	int		getGTE() const;

	void	beSigned(Bureaucrat &);
	virtual void	execute(Bureaucrat const & executor) const =0;

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
std::ostream	&operator<<(std::ostream&, const AForm&);
