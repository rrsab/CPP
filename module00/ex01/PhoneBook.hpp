#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	int		m_currentFreePosition;
	int		m_size;
	Contact	m_contact[8];
public:
	PhoneBook();
	~PhoneBook();
	void	Add();
	void	Search();
	void	Exit();
};

#endif
