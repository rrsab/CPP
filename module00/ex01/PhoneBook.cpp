#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): m_currentFreePosition(0), m_size(0) {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::Add()
{
	m_contact[m_currentFreePosition].setFirstName();
	m_contact[m_currentFreePosition].setLastName();
	m_contact[m_currentFreePosition].setNickName();
	m_contact[m_currentFreePosition].setPhoneNumber();
	m_contact[m_currentFreePosition].setDarkestSecret();
	if (m_currentFreePosition < 7)
		m_currentFreePosition++;
	else
		m_currentFreePosition = 0;
	if (m_size < 8)
		m_size++;
}

void	PhoneBook::Search()
{
	int	i = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < m_size; ++i)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (m_contact[i].getFirstName().length() <= 10)
			std::cout << std::setw(10) << m_contact[i].getFirstName();
		else
		{
			std::cout.write(m_contact[i].getFirstName().c_str(), 9);
			std::cout.put('.');
		}
		std::cout << "|";
		if (m_contact[i].getLastName().length() <= 10)
			std::cout << std::setw(10) << m_contact[i].getLastName();
		else
		{
			std::cout.write(m_contact[i].getLastName().c_str(), 9);
			std::cout.put('.');
		}
		std::cout << "|";
		if (m_contact[i].getNickName().length() <= 10)
			std::cout << std::setw(10) << m_contact[i].getNickName();
		else
		{
			std::cout.write(m_contact[i].getNickName().c_str(), 9);
			std::cout.put('.');
		}
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	if (m_size > 0)
	{
		while (true)
		{
			std::cout << "Enter an index contact: ";
			if (!(std::cin >> i) || !(i >= 1 && i <= m_size))
			{
				if (std::cin.eof())
					exit(0);
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				std::cout << "The input makes no sense, define a relevant behavior!" << std::endl;
				continue ;
			}
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break ;
		}
		i -= 1;
		std::cout << "The first name: " << m_contact[i].getFirstName() << std::endl
		<< "The last name: " << m_contact[i].getLastName() << std::endl
		<< "The nickname: " << m_contact[i].getNickName() << std::endl
		<< "The phone number: " << m_contact[i].getPhoneNumber() << std::endl
		<< "The darkest secret: " << m_contact[i].getDarkestSecret() << std::endl;
	}
	else
		std::cout << std::endl;
}

void	PhoneBook::Exit()
{
	std::string	strCmd;

	while (!std::cin.eof())
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, strCmd) || strCmd == "EXIT")
			break ;
		else if (strCmd == "ADD")
			Add();
		else if (strCmd == "SEARCH")
			Search();
	}
}