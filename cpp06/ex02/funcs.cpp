#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>

#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base*	generate() 
{
	int s = rand() % 3;

	if (s == 0)
		return new A();
	else if (s == 1)
		return new B();
	return new C();
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "it's A" << std::endl;
		return;
	}
	if(dynamic_cast<B*>(p))
	{
		std::cout << "it's B" << std::endl;
		return;
	}
	if(dynamic_cast<C*>(p))
	{
		std::cout << "it's C" << std::endl;
		return;
	}
}

void	identify(Base& p)
{
	Base l;
	try {
		l = dynamic_cast<A&>(p);
		std::cout << "it's A" << std::endl;
	}
	catch (std::exception&){ try {
			l = dynamic_cast<B&>(p);
			std::cout << "it's B" << std::endl;
		}
		catch (std::exception&){ try {
				l = dynamic_cast<C&>(p);
				std::cout << "it's C" << std::endl;
			}
			catch (std::exception&){
				std::cout << "UNEXPECTED" << std::endl; }}}
	
}
