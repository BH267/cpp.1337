#include "pb.h"
#include <iostream>

std::string	getname(int name)
{
	std::string	str;
	int	i;

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
	std::getline(std::cin, str);
	if (str[0] == '\0')
	{
			std::cout << "		no empty field ..try again " << std::endl;
			return (getname(name));
	}
	i = 0;
	while (str[i])
	{
		if (!isalpha(str[i]))
		{
			std::cout << "		this is not a string ..try again " << std::endl;
			return (getname(name));
		}
		i++;
	}
	return (str);
}

size_t	getnumber(void)
{
	std::string	str;
	size_t		num;

	std::cout << "	enter the phone number: ";
	std::getline(std::cin, str);
	if (str[0] == '\0')
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
	num = std::stoul(str);
	return (num);
}
