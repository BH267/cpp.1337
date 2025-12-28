#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void);
void	identify(Base*);
void	identify(Base&);

int main()
{

	std::srand(std::time(NULL));
	for (int i = 0; i < 5; i++) {
		Base* obj = generate();

		std::cout << "Identify by pointer: ";
		identify(obj);

		std::cout << "Identify by reference: ";
		identify(*obj);

		delete obj;
		std::cout << "----" << std::endl;
	}
	return 0;
}
