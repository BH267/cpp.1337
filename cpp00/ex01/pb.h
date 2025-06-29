#ifndef PB_H
# define PB_H

#include <iostream>
#include <ostream>
#include <string>
#include <cstddef>
#include "classes.h"

#define FIRST 1
#define LAST 2
#define NICKNAME 3
#define SECRET 4

std::string	getname(int name);
size_t		getnumber(void);
void		search();

# endif
