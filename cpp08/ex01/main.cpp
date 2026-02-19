#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ostream>
#include <vector>
#include "Span.hpp"

int main(void)
{
	std::srand(std::time(NULL));
    std::cout << "=== Basic Subject Example ===" << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Exception Tests ===" << std::endl;
    try
    {
        Span sp = Span(2);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3); // Should throw
    }
    catch (const std::exception & e)
    {
        std::cout << "AddNumber Exception: " << e.what() << std::endl;
    }

    try
    {
        Span sp = Span(1);
        sp.addNumber(1);
        std::cout << sp.shortestSpan() << std::endl; // Should throw
    }
    catch (const std::exception & e)
    {
        std::cout << "ShortestSpan Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Large Scale Test (100,000 numbers) ===" << std::endl;
    try
    {
        Span sp = Span(10000);
        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i)
            numbers.push_back(std::rand() % 1000000);
        sp.addNumbers(numbers.begin(), numbers.end()); 
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
