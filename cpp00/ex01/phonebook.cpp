#include "pb.h"

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
	std::cout << "exit the phonebook done." << std::endl;
	std::exit(0);
}

int main ()
{
	std::string	cmd;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "\033[38;2;0;255;255menter a command: \033[0m" ;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
		else if (cmd == "EXIT")
			pb.exit();
	}
	return 0;
}
