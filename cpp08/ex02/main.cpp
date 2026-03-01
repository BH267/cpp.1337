#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> ms;
    
	ms.push(10);
	ms.push(20);
	ms.push(30);

	std::cout << "Top: " << ms.top() << std::endl;
	std::cout << "Size: " << ms.size() << std::endl;

	std::cout << "Iterate:" << std::endl;
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it)
		std::cout << *it << std::endl;

	std::stack<int> s(ms);
	std::cout << "Copy stack top: " << s.top() << std::endl;

	return 0;
}
