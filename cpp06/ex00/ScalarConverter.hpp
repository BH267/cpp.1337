#pragma once

#include <string>

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <iomanip>

class ScalarConverter {

	template <typename T>
	static void	print(T value);

	ScalarConverter();
	ScalarConverter(const ScalarConverter &);
	ScalarConverter &operator=(const ScalarConverter &);
	~ScalarConverter();

public:

	static void	convert(const std::string&);
};
