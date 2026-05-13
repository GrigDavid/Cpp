#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() :
_firstName(),
_lastName(),
_nickname(),
_phoneNumber(),
_darkestSecret(),
_id()
{
};

Contact::Contact(const Contact& other) :
_firstName(other._firstName),
_lastName(other._lastName),
_nickname(other._nickname),
_phoneNumber(other._phoneNumber),
_darkestSecret(other._darkestSecret),
_id(other._id)
{
}

Contact::~Contact()
{
};

Contact::Contact(
std::string firstName,
std::string lastName,
std::string nickname,
std::string phoneNumber,
std::string darkestSecret,
int id) :
_firstName(firstName),
_lastName(lastName),
_nickname(nickname),
_phoneNumber(phoneNumber),
_darkestSecret(darkestSecret),
_id(id)
{
}
Contact& Contact::operator=(const Contact& other)
{
	if (this == &other)
		return *this;
	_firstName = other._firstName;
	_lastName = other._lastName;
	_nickname = other._nickname;
	_phoneNumber = other._phoneNumber;
	_darkestSecret = other._darkestSecret;
	_id = other._id;
	return (*this);
}

std::string	Contact::getFirstName() const
{
	return _firstName;
};

std::string	Contact::getLastName() const
{
	return _lastName;
};

std::string	Contact::getNickname() const
{
	return _nickname;
};

std::string	Contact::getPhoneNumber() const
{
	return _phoneNumber;
};

std::string	Contact::getDarkestSecret() const
{
	return _darkestSecret;
};

int Contact::getId() const
{
	return _id;
};
