#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

const char * NotFond::what() const throw() {
	return "No occurrence is found :(";
}

int main(void)
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);

    std::cout << "Testing Easy Find with std::vector:" << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\nTesting Easy Find with std::vector (must throw):" << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 42);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\nTesting Easy Find with std::list:" << std::endl;
    try
    {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\nTesting Easy Find with std::deque:" << std::endl;
    try
    {
        std::deque<int>::iterator it = easyfind(deq, 200);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
