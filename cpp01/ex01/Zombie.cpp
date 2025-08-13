#include "Zombie.hpp"

Zombie::~Zombie()
	{std::cout << "Zombie " << name << " destroyed." << std::endl;}

Zombie::Zombie()
	{std::cout << "Zombie created." << std::endl;}

Zombie::Zombie(std::string namee)
{
	name = namee;
	std::cout << "Zombie " << name << " created." << std::endl;
}

std::string	Zombie::get_name(void)
	{return name;}

void		Zombie::set_name(std::string n)
	{name = n;}

void		Zombie::announce(void)
	{std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
