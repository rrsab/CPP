#include <iostream>

int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc ; ++i)
		{
			char *str = argv[i];
			char current;
			for (int j = 0; (current = str[j]) ; ++j)
				std::cout << (char) toupper(current);
		}
		std::cout << std::endl;
	}
	return 0;
}
