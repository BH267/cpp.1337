#include "iter.hpp"
#include <iostream>

void	inc(int& nb)
{
	nb += 1;
	std::cout << nb << std::endl;
}

void	print(const char *&str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::cout << " -- array of int --" << std::endl;
	int a[4] = {1, 4, 6, 9};
	::iter(a, 4, inc);
	std::cout << " -- array of string --" << std::endl;
	char str1[] = "hello";
	char str2[] = "world";
	const char* p[2] = {str1, str2};
	::iter(p, 2, print);
	std::cout << p[0] << " " << p[1] << std::endl;
}
