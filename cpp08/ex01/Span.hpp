#pragma once

#include <vector>

class Span {
	unsigned int N;

	long min;
	long premin;
	
	std::vector<int> array;
public:
	Span();
	Span(unsigned int);
	Span(const Span &);
	Span &operator=(const Span &);
	~Span();

	void	addNumber(int);
	long	shortestSpan();
	long	longestSpan();

	template <typename T>
	void	addNumbers(T begin, T end);
};

template <typename T>
void	Span::addNumbers(T begin, T end)
{
	T it = begin;
	while (it != end)
	{
		addNumber(*it);
		++it;
	}
}
