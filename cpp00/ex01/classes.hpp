#pragma once

#include <iostream>

class	Contact {
	public :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
		int		index;
};


class	PhoneBook
{
	public :
		Contact	phonebook[8];
		void	add();
		void	search();
		void	exit();

};
