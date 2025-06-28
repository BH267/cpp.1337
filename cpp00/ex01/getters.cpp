#include "pb.h"
#include <cstddef>

std::string	getname(int name)
{
	std::string	str;
	int	i;

	switch (name) {
		case 1:
			std::cout << "enter the first name: ";
			break ;
		case 2:
			std::cout << "enter the last name: ";
			break ;
		case 3:
			std::cout << "enter the nickname: ";
			break ;
	}
	std::getline(std::cin, str);
	i = 0;
	while (str[i])
	{
		if (!isalpha(str[i]))
			return NULL;
		i++;
	}
	return (str);
}

size_t	getnumber(void)
{
	std::string	str;
	size_t		num;

	std::cout << "enter the phone number: ";
	std::getline(std::cin, str);
	num = std::stoul(str);
	return (num);
}
