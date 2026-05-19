#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _lastId(0), _filled(false)
{
}

PhoneBook::~PhoneBook()
{}

std::string PhoneBook::trimString(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::printContactTabbed(const Contact &C) const
{
	std::cout << std::setw(10) << std::right << C.getId() << "|";
	std::cout << std::setw(10) << trimString(C.getFirstName()) << "|";
	std::cout << std::setw(10) << trimString(C.getLastName()) << "|";
	std::cout << std::setw(10) << trimString(C.getNickname()) << std::endl;
}

void PhoneBook::printContact(const Contact &C)
{
	std::cout << C.getFirstName() << "\n" << C.getLastName() << "\n" << C.getNickname() << "\n" << C.getDarkestSecret() << std::endl;
}

void	PhoneBook::displayContact(int id)
{
	for (int i = 0; i < 8 && i < _lastId; i++)
	{
		if (_Contacts[i].getId() == id)
		{
			printContact(_Contacts[i]);
			return ;
		}
	}
	std::cout << "Invalid contact id" << std::endl;
}

void	PhoneBook::addContact(const Contact& newContact)
{
	_Contacts[_lastId] = newContact;
	_lastId++;
	if (_lastId == 8)
	{
		_filled = true;
		_lastId = 0;
	}
}

void	PhoneBook::listContacts() const
{
	for (int i = 0; (i < _lastId) || ((i < 8) && _filled); i++)
	{
		printContactTabbed(_Contacts[i]);
	}
}

void	PhoneBook::initConsole()
{
	int	status = 1;
	std::string input;

	while (status)
	{
		std::cout << "Choose an action :" << std::setw(10) << "ADD" << std::setw(10) << "SEARCH" << std::setw(10) << "EXIT" <<std::endl;
		std::getline(std::cin, input);
		//trim whitespaces
		if (std::cin.eof())
			break;
		if (!input.compare("ADD"))
		{
			std::cout << "insert first name" << std::endl;
			std::string firstName;
			std::getline(std::cin, firstName);
			if (std::cin.eof())
				break;
			std::cout << "insert last name" << std::endl;
			std::string lastName;
			std::getline(std::cin, lastName);
			if (std::cin.eof())
				break;
			std::cout << "insert nickname" << std::endl;
			std::string nickName;
			std::getline(std::cin, nickName);
			if (std::cin.eof())
				break;
			std::cout << "insert phone number" << std::endl;
			std::string number;
			std::getline(std::cin, number);
			if (std::cin.eof())
				break;
			std::cout << "insert darkest secret" << std::endl;
			std::string secret;
			std::getline(std::cin, secret);
			if (std::cin.eof())
				break;
			addContact(Contact(firstName, lastName, nickName, number, secret, _lastId));
		}
		else if (!input.compare("SEARCH"))
		{
			if (!_filled && _lastId == 0)
			{
				std::cout << "No contacts found" << std::endl;
				continue ;
			}
			listContacts();
			std::getline(std::cin, input);
			if (std::cin.eof())
				break;
			if (input.length() != 1)
				std::cout << "Invalid contact id" << std::endl;
			else if (input[0] > '9' || input[0] < '0')
				std::cout << "Invalid contact id" << std::endl;
			else
			{
				displayContact(static_cast<int>(input[0] - '0'));
			}
		}
		else if (!input.compare("EXIT"))
		{
			return ;
		}
		else
		{
			std::cout << "please input a valid command" << std::endl;
		}
	}
}
