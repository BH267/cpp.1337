#pragma once

#include <string>


class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string);
	Weapon();
	~Weapon();

	const std::string&	getType(void);
	void		setType(std::string);
};
