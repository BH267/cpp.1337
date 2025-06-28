#include "pb.h"

void	putheader()
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "_____________________________________________" << std::endl;

}

std::string	putenchar(std::string str)
{
	if (str[9])
	{
		str[9] = '.';
		str[10] = '\0';
	}
	return str;
}

void	putcontact(Contact contact, std::string index)
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|"<< index <<"|"<< putenchar(contact.first_name) <<"|"<< putenchar(contact.last_name) << "|" << putenchar(contact.nickname) << "|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;

}

void	PhoneBook::search()
{
	putheader();
	putcontact(phonebook[0], "0");
	putcontact(phonebook[1], "1");
	putcontact(phonebook[2], "2");
	putcontact(phonebook[3], "3");
	putcontact(phonebook[4], "4");
	putcontact(phonebook[5], "5");
	putcontact(phonebook[6], "6");
	putcontact(phonebook[7], "7");
}
