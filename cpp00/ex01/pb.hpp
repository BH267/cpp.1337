#pragma once

#include <iostream>
#include <ostream>
#include <string>
#include <cstddef>
#include <limits>
#include "classes.hpp"

#define FIRST 1
#define LAST 2
#define NICKNAME 3
#define SECRET 4

std::string	getname(int name);
std::string	getnumber(void);
void		search();
