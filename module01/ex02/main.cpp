#include <iostream>
#include <string>

int main()
{
	std::string		str1 = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str1;
	std::string&	stringREF = str1;

	std::cout << &str1 << std::endl;

	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}
