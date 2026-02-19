#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <vector>

Span::Span() : N(0)
{
	min = LONG_MAX;
	premin = LONG_MAX;
}

Span::Span(unsigned int n) : N(n)
{
	min = LONG_MAX;
	premin = LONG_MAX;
}

Span::Span(const Span &other) : N(other.N)
{
	min = other.min;
	premin = other.premin;
	array = other.array;
}


Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		N = other.N;
		min = other.min;
		premin = other.premin;
		array = other.array;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (array.size() >= N)
		throw std::out_of_range("no size left to add more numbers");
	array.push_back(n);
}

long Span::longestSpan()
{
	if (array.size() < 2)
		throw std::runtime_error("no enough numbers");
	long max = *(std::max_element(array.begin(), array.end()));
	long min = *(std::min_element(array.begin(), array.end()));
	return (max - min);
}

long Span::shortestSpan()
{
	if (array.size() < 2)
		throw std::runtime_error("no enough numbers");
	long shortest = LONG_MAX;
	std::vector<int> sorted = array;
	std::sort(sorted.begin(), sorted.end());

	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		long diff = sorted[i + 1] - sorted[i];
		if (shortest > diff)
			shortest = diff;
	}
	return shortest;
}
