#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T &ctn, int i)
{
	typename T::iterator it;
	it = std::find(ctn.begin(), ctn.end(), i);
	if (it == ctn.end())
		throw std::runtime_error("No occurrence is found :(");
	return it;
}

