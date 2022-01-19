#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		phoneNumber;
	std::string		darkestSecret;

public:
	Contact();
	~Contact();

	const std::string	getFirstName() const ;
	const std::string	getLastName() const ;
	const std::string	getNickName() const;
	const std::string	getPhoneNumber() const;
	const std::string	getDarkestSecret() const;

	void		setFirstName();
	void		setLastName();
	void		setNickName();
	void		setPhoneNumber();
	void		setDarkestSecret();
};

#endif
