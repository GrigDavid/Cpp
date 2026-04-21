#include "Contact.hpp"

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

void	Contact::printContact() const
{
	//iomanip
}