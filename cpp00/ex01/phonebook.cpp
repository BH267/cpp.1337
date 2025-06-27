#include <iostream>

class	Contact {
	public :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		long		phone_number;
		std::string	secret;
		int		index;
};

class	PhoneBook
{
	public :
		Contact	phonebook[8];

};

int main ()
{
	return 0;
}
