#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) {*this = other;}
ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}
ScalarConverter::~ScalarConverter() {}


void	ScalarConverter::convert(const std::string&	name)
{

	// char
	if (name.size() == 3 && name[0] == '\'' && name[name.size() - 1] == '\'')
	{
		print(name[1]);
		return ;
	}

	// float inf
	if (name == "nanf" || name == "-inff" || name == "+inff")
	{
		float f = name[0] == '-' ? -INFINITY : name[0] == '+' ? INFINITY : NAN;
		print(f);
		return ;
	}

	// double inf
	if (name == "nan" || name == "+inf" || name == "-inf")
	{
		double d = name[0] == '-' ? -INFINITY : name[0] == '+' ? INFINITY : NAN;
		print(d);
		return;
	}

	// float
	if (name[name.size() - 1] == 'f')
	{
		char	*end;
		float f = std::strtof(name.c_str(), &end);
		if (*end != 'f')
			return (std::cout << "Invalid float literal\n", void());
		print(f);
		return ;
	}

	// int
	char	*end;
	long	l = std::strtol(name.c_str(), &end, 10);
	if (*end == '\0')
		return (print(l));

	// double
	double	d = std::strtod(name.c_str(), &end);
	if (*end != '\0')
		return (std::cout << "Invalid literal\n", void());
	print(d);
}

template <typename T>
void	ScalarConverter::print(T value)
{
	// char
	if (std::isnan(value) || value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
		std::cout << "char : impossible\n";
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "char : Non displayable\n";
	else
		std::cout << "char : '" << static_cast<char>(value) << "'\n";

	// int
	if (std::isnan(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int : impossible\n";
	else
		std::cout << "int : " << static_cast<int>(value) << std::endl;

	// float
	float	f = static_cast<float>(value);
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;

	// double
	std::cout << "double : " << static_cast<double>(value) << std::endl;
}
