#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
};

Contact::Contact(const Contact& newCon)
{
	m_firstName = newCon.m_firstName;
	m_lastName = newCon.m_lastName;
	m_nickname = newCon.m_nickname;
	m_phoneNumber = newCon.m_phoneNumber;
	m_darkestSecret = newCon.m_darkestSecret;
	m_id = newCon.m_id;
}

Contact::~Contact()
{
	std::cout <<"merav" << m_id <<std::endl;
};

Contact::Contact(
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
void Contact::operator=(const Contact& newCon)
{
	m_firstName = newCon.m_firstName;
	m_lastName = newCon.m_lastName;
	m_nickname = newCon.m_nickname;
	m_phoneNumber = newCon.m_phoneNumber;
	m_darkestSecret = newCon.m_darkestSecret;
	m_id = newCon.m_id;
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
