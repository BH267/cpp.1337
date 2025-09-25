#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

int	replace(std::string file, std::string s1, std::string s2)
{
	std::string	line;

	std::ifstream	infile(file.c_str());
	if (!infile.is_open() || infile.peek() == -1)
	{
		std::cout << "the file did not opened or empty\n";
		return 1;
	}
	std::ofstream	outfile(file.append(".replace").c_str());
	while (std::getline(infile, line))
	{
		for(int	i = 0; line[i]; i++)
		{
			for (int j = 0; line[i + j] && s1[j] && line[i + j] == s1[j]; j++)
			{
				if (j + 1 == (int)s1.length())
				{
					line.erase(i, j + 1);
					line.insert(i, s2);
					break;
				}
			}
		}
		outfile << line;
		outfile << "\n";
	}
	infile.close();
	outfile.close();
	return 0;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./sifl <filename> <s1> <s2>\n";
		return 1; 
	}
	std::string	file = std::string(av[1]);
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (replace(file, s1, s2))
		return 1;
}
