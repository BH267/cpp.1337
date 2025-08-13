#pragma once


//  the included liberaries 
//
#include <string>
#include <iostream>


//  the classes 
//
class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		std::string	get_name(void);
		void		announce(void);
		void		set_name(std::string n);
};

//  the functions 
//
Zombie* zombieHorde( int N, std::string name );
