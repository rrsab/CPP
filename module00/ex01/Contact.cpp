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
	firstName = getInput("Enter a first name: ");
}

const std::string	Contact::getFirstName() const
{
	return (firstName);
}

void Contact::setLastName()
{
	lastName = getInput("Enter a last name: ");
}

const std::string	Contact::getLastName() const
{
	return (lastName);
}

void Contact::setNickName()
{
	nickName = getInput("Enter a nickname: ");
}

const std::string	Contact::getNickName() const
{
	return (nickName);
}

void Contact::setPhoneNumber()
{
	phoneNumber = getInput("Enter a phone number: ");
}

const std::string	Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

void Contact::setDarkestSecret()
{
	darkestSecret = getInput("Enter a darkest secret : ");
}

const std::string	Contact::getDarkestSecret() const
{
	return (darkestSecret);
}