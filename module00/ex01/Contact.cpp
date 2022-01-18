#include "Contact.hpp"
static std::string getInput(const char *line)
{
	std::string	strTmp;

	while (strTmp.empty())
	{
		std::cout << line;
		if (!std::getline(std::cin, strTmp))
			exit(0);
		else if (strTmp.find_first_not_of(" \t\v\r\n") == strTmp.npos)
			strTmp.clear();
	}
	return strTmp;
}

Contact::Contact()
{}
Contact::~Contact()
{}

void Contact::setFirstName()
{
	firstName = getInput()
}