#pragma once

template <typename T>
void	swap(T& a, T& b)
{
	T	swp;

	swp = a;
	a = b;
	b = swp;
}

template <typename T>
T&	min(T& a, T& b)
{
	if (a < b) return a;
	return b;
}

template <typename T>
T&	max(T& a, T& b)
{
	if (a > b) return a;
	return b;
}
