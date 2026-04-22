#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
};

Contact::~Contact()
{
};

void	Contact::setContact(
std::string firstName,
std::string lastName,
std::string nickname,
std::string phoneNumber,
std::string darkestSecret,
int id)
{
	m_firstName = firstName;
	m_lastName = lastName;
	m_nickname = nickname;
	m_phoneNumber = phoneNumber;
	m_darkestSecret = darkestSecret;
	m_id = id;
}

std::string	Contact::getFirstName() const
{
	return m_firstName;
};

std::string	Contact::getLastName() const
{
	return m_lastName;
};

std::string	Contact::getNickname() const
{
	return m_nickname;
};

std::string	Contact::getPhoneNumber() const
{
	return m_phoneNumber;
};

std::string	Contact::getDarkestSecret() const
{
	return m_darkestSecret;
};

int Contact::getId()const
{
	return m_id;
};

std::string Contact::trimString(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Contact::printContact() const
{
	std::cout << std::setw(10) << std::right << m_id << "|";
	std::cout << std::setw(10) << trimString(m_firstName) << "|";
	std::cout << std::setw(10) << trimString(m_lastName) << "|";
	std::cout << std::setw(10) << trimString(m_nickname) << std::endl;
	
	
	
	
	
	
	//iomanip
}
