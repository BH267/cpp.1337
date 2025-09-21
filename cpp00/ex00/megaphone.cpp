#include <iostream>

int main (int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			std::cout << (char)std::toupper(av[i][j++]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
