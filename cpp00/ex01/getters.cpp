#include "pb.hpp"
#include <iostream>
#include <string>

std::string	getname(int name)
{
	std::string	str;

	switch (name) {
		case 1:
			std::cout << "	enter the first name: ";
			break ;
		case 2:
			std::cout << "	enter the last name: ";
			break ;
		case 3:
			std::cout << "	enter the nickname: ";
			break ;
		case 4:
			std::cout << "	enter the darkest secret: ";
			break ;
	}
	if (std::getline(std::cin, str))
	{
		if (str.empty())
		{
				std::cout << "		no empty field ..try again " << std::endl;
				return (getname(name));
		}
		for (int i = 0; str[i]; i++)
			if (!isalpha(str[i]))
			{
				std::cout << "		this is not a string ..try again " << std::endl;
				return (getname(name));
			}
	}
	else
	{
		std::cout << "\nEOF detected.\n exit." << std::endl;
		exit(1);
	}
	return (str);
}

std::string	getnumber(void)
{
	std::string	str;
	size_t		num;

	std::cout << "	enter the phone number: ";
	if (std::getline(std::cin, str))
	{
		if (str.empty())
		{
				std::cout << "		this is not a phone number ..try again " << std::endl;
				return (getnumber());
		}
		for (int i = 0; str[i]; i++)
			if (!std::isdigit(str[i]))
			{
				std::cout << "		this is not a phone number ..try again " << std::endl;
				return (getnumber());
			}
	}
	else
	{
		std::cout << "\nEOF detected.\n exit." << std::endl;
		exit(1);
	}
	return (str);
}
