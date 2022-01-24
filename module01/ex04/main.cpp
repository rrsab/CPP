#include <iostream>
#include <string>
#include <fstream>

void	replaceWords(std::string str1, std::string str2, std::ifstream &in,
					 std::ofstream &out)
{
	std::string	buffer;

	while (std::getline(in, buffer))
	{
		size_t	beginPos;
		size_t	entryPos;

		beginPos = 0;

		while ((entryPos = buffer.find(str1, beginPos)) != std::string::npos)
		{
			buffer.erase(entryPos, str1.length());
			buffer.insert(entryPos, str2);
			beginPos = entryPos + str2.length();
		}
		out << buffer << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fileName = argv[1];
		std::string str1 = argv[2];
		std::string str2 = argv[3];
		if (str1.empty() || str2.empty())
		{
			std::cout << "s1 and s2 cannot be empty" << std::endl;
			return 0;
		}

		std::ifstream	inFile(fileName);
		if (!inFile.is_open())
		{
			std::cout << "cannot open input file" << std::endl;
			return 1;
		}

		std::ofstream	outFile(std::string(fileName) + ".replace");
		if (!outFile.is_open())
		{
			std::cout << "cannot open output file" << std::endl;
			return 1;
		}
		replaceWords(str1, str2, inFile, outFile);

		inFile.close();
		outFile.close();
	}
	else
		std::cout << "usage: ./replace <filename> <s1> <s2>" << std::endl;
	return 0;
}
