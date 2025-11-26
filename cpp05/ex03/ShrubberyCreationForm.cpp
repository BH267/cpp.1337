#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("shrubbery creation form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _target(other._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!getSign() || executor.getGrade() > getGTE())
		throw GradeTooLowException();

	std::ofstream	file((_target + "_shrubbery").c_str());
	file <<
  "    \n"
  "                   / / /   \n"
  "                 /        /  /     //    /   \n"
  "              /                 /         /  /   \n"
  "                              /   \n"
  "                             /                //   \n"
  "             /          /            /              /   \n"
  "             /            '/,        /               /   \n"
  "             /              'b      *   \n"
  "              /              '$    //                //   \n"
  "             /    /           $:   /:               /   \n"
  "           //      /  //      */  @):        /   / /   \n"
  "                        /     :@,@):   ,/**:'   /   \n"
  "            /      /,         :@@*: //**'      /   /   \n"
  "                     '/o/    /:(@'/@*\"'  /   \n"
  "             /  /       'bq,//:,@@*'   ,*      /  /   \n"
  "                        ,p$q8,:@)'  /p*'      /   \n"
  "                 /     '  / '@@Pp@@*'    /  /   \n"
  "                  /  / //    Y7'.'     /  /   \n"
  "                            :@):.   \n"
  "                          .:@:'.   \n"
  "                        .::(@:.        \n";
}
