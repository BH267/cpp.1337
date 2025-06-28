#include "classes.h"
#include "pb.h"
#include <iostream>

void	PhoneBook::add()
{
	Contact contact;
	static int	i;

	contact.first_name = getname(FIRST);
	contact.last_name = getname(LAST);
	contact.nickname = getname(NICKNAME);
	contact.phone_number = getnumber();
	std::cout << "enter the darkest secret:";
	std::getline(std::cin, contact.secret);
	contact.index = i++;
	phonebook[contact.index % 8] = contact ;
}

void	PhoneBook::exit()
{
	std::cout << "exit the contact done." << std::endl;
	std::exit(0);
}

int main ()
{
	std::string	cmd;
	PhoneBook	pb;

	std::cout << "enter a command :" ;
	std::getline(std::cin, cmd);
	if (cmd == "ADD")
		pb.add();
	else if (cmd == "SEARCH")
		pb.search();
	else if (cmd == "EXIT")
		pb.exit();
	return 0;
}
