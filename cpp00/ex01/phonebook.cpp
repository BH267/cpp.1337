#include "pb.hpp"
#include <cctype>
#include <iostream>

void	PhoneBook::add()
{
	Contact contact;
	static int	i;

	contact.first_name = getname(FIRST);
	contact.last_name = getname(LAST);
	contact.nickname = getname(NICKNAME);
	contact.phone_number = getnumber();
	contact.secret = getname(SECRET);
	contact.index = i++;
	phonebook[contact.index % 8] = contact ;
}

void	PhoneBook::exit()
{
	std::cout << "exit the phonebook..\ndone." << std::endl;
}

int main ()
{
	std::string	cmd;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "\033[38;2;0;255;255menter a command: \033[0m" ;
		if (std::getline(std::cin, cmd))
		{
			for (size_t i = 0; i < cmd.length(); i++)
				cmd[i] = (char)std::toupper(cmd[i]);
			if (cmd == "ADD")
				pb.add();
			else if (cmd == "SEARCH")
				pb.search();
			else if (cmd == "EXIT")
			{
				pb.exit();
				return 0;
			}
		}
		else 
		{
			std::cout << "\nEOF detected.\n exit." << std::endl;
			return (1);
		}
	}
	return 0;
}
