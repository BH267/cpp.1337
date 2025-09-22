#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

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
	std::string	line;

	std::ifstream	infile(file.c_str());
	std::ofstream	outfile(file.append(".replace").c_str(), std::ios::app);
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
}
