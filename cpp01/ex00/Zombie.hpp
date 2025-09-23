#pragma once


#include <string>
#include <iostream>


class Zombie
{
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		std::string	get_name(void);
		void		announce(void);
		void		set_name(std::string n);
};
Zombie*		newZombie(std::string name);
void		randomChump(std::string name);
