#include "classes.h"
#include "pb.h"
#include <iostream>
#include <ostream>
#include <string>


void	putheader()
{
	std::cout << "╭──────────┬──────────┬──────────┬──────────╮" << std::endl;
	std::cout << "│  index   │first name│ last name│ nickname │" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;

}

std::string	putenchar(std::string str)
{
	int	i;

	if (str.length() > 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.insert(str.end(), 1, '.');
	}
	return str;
}

std::string	padding(std::string const &str, size_t s, int mode) {
	size_t	pad;
	size_t	isodd;
	size_t	sol;

	isodd = 0;
	sol = 0;
	if (s % 2 == 0 && str.length() % 2 != 0 && mode)
		sol = 1;
	if (s % 2 != 0 && str.length() % 2 == 0 && mode)
		sol = 1;
	if (str.length() % 2 != 0 && mode == 0)
		isodd = 1;
	pad = (s - str.length())/2 ;
	if (str.size() < s)
		return std::string(pad, ' ') + str + std::string(pad + isodd + sol, ' ');
	else
		return str;
}

void	putphonebook(Contact contact, std::string index)
{
	std::cout << "│" << padding(index, 10, 0);
	std::cout << "│" << padding(putenchar(contact.first_name), 10, 0) ;
	std::cout << "│" << padding(putenchar(contact.last_name), 10, 0) ;
	std::cout << "│" << padding(putenchar(contact.nickname), 10, 0) ;
	std::cout << "│" << std::endl;
}

int	getbiglen(Contact contact)
{
	int	blen = 0;

	if (blen < contact.first_name.length())
		blen = contact.first_name.length();
	if (blen < contact.last_name.length())
		blen = contact.last_name.length();
	if (blen < contact.nickname.length())
		blen = contact.nickname.length();
	if (blen < contact.secret.length())
		blen = contact.secret.length();
	if (blen < std::to_string(contact.phone_number).length())
		blen = std::to_string(contact.phone_number).length();
	return (blen);
}

void	border(int n, int mode)
{
	if (mode == 1)
		std::cout << "╭──────────────┬";
	else if (mode == 2)
		std::cout << "├──────────────┼";
	else if (mode == 3)
		std::cout << "╰──────────────┴";
	for (int i = 0; i < n; i++)
		std::cout << "─";
	if (mode == 1)
		std::cout << "╮" << std::endl;
	else if (mode == 2)
		std::cout << "┤" << std::endl;
	else if (mode == 3)
		std::cout << "╯" << std::endl;

}

void	putcontact(Contact contact)
{
	int		biglength = getbiglen(contact);

	border(biglength, 1);
	std::cout << "│"<< padding("first name", 14, 0) <<  "│" << padding(contact.first_name, biglength, 1) << "│" << std::endl;
	border(biglength, 2);
	std::cout << "│"<< padding("last name", 14, 0) <<  "│" << padding(contact.last_name, biglength, 1) << "│" << std::endl;
	border(biglength, 2);
	std::cout << "│"<< padding("nickname", 14, 0) <<  "│" << padding(contact.nickname, biglength, 1) << "│" << std::endl;
	border(biglength, 2);
	std::cout << "│"<< padding("phone number", 14, 0) <<  "│" << padding(std::to_string(contact.phone_number), biglength, 1) << "│" << std::endl;
	border(biglength, 2);
	std::cout << "│"<< padding("darkest secret", 14, 0) <<  "│" << padding(contact.secret, biglength, 1) << "│" << std::endl;
	border(biglength, 3);
}

void	PhoneBook::search()
{
	std::string	cont;

	if (phonebook[0].first_name[0])
		putheader();
	else
		std::cout << "	nothing to show.. go add some contacts" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (phonebook[i].first_name[0])
		{
			putphonebook(phonebook[i], std::to_string(i));
			if (phonebook[i + 1].first_name[0] && i != 7)
				std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
			else
				std::cout << "╰──────────┴──────────┴──────────┴──────────╯" << std::endl;
		}
	}
	std::cout << "which index do you want: ";
	if (std::getline(std::cin, cont)){
		if (0 <= std::stoi(cont) && std::stoi(cont) < 8 && phonebook[std::stoi(cont)].first_name[0])
			putcontact(phonebook[std::stoi(cont)]);
		else
			std::cout << "no contact with this index" << std::endl;
	}else {
		std::cout << "\nEOF detected.\n exit." << std::endl;
		std::exit(1);
	}
}
