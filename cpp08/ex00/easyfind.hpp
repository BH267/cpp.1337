#pragma once

#include <algorithm>
#include <exception>
#include <iostream>
#include <ostream>

class	NotFond : public std::exception
{
	public:
		const char * what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T &ctn, int i)
{
	typename T::iterator it;
	it = std::find(ctn.begin(), ctn.end(), i);
	if (it == ctn.end())
		throw NotFond();
	return it;
}

