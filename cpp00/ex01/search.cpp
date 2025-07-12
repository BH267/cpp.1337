#include "pb.h"


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

std::string	padding(std::string const &str, size_t s) {
	size_t	pad;
	size_t	isodd;

	isodd =0 ;
	if (str.length() % 2 != 0)
		isodd = 1;
	pad = (s - str.length())/2 ;
	if (str.size() < s)
		return std::string(pad, ' ') + str + std::string(pad + isodd, ' ');
	else
		return str;
}

void	putcontact(Contact contact, std::string index)
{
	std::cout << "│" << padding(index, 10);
	std::cout << "│" << padding(putenchar(contact.first_name), 10) ;
	std::cout << "│" << padding(putenchar(contact.last_name), 10) ;
	std::cout << "│" << padding(putenchar(contact.nickname), 10) ;
	std::cout << "│" << std::endl;
}

void	PhoneBook::search()
{
	if (phonebook[0].first_name[0])
		putheader();
	else
		std::cout << "	nothing to show.. go add some contacts" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (phonebook[i].first_name[0])
		{
			putcontact(phonebook[i], std::to_string(i));
		if (phonebook[i + 1].first_name[0] && i != 7)
			std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		else
			std::cout << "╰──────────┴──────────┴──────────┴──────────╯" << std::endl;}
	}
}
