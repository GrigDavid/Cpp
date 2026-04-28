#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_lastId = 0;
}

PhoneBook::~PhoneBook()
{}

std::string PhoneBook::trimString(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::printContact(Contact &C) const
{
	std::cout << std::setw(10) << std::right << C.getId() << "|";
	std::cout << std::setw(10) << trimString(C.getFirstName()) << "|";
	std::cout << std::setw(10) << trimString(C.getLastName()) << "|";
	std::cout << std::setw(10) << trimString(C.getNickname()) << std::left << std::endl;
}

void	PhoneBook::SearchContact(int id)
{
	for (int i = 0; i < 8 && i < m_lastId; i++)
	{
		if (m_Contacts[i].getId() == id)
		{
			printContact(m_Contacts[i]);
			return ;
		}
	}
	std::cout << "Invalid contact id" << std::endl;
}

void	PhoneBook::AddContact(const Contact& newContact)
{
	m_Contacts[m_lastId] = newContact;
	m_lastId++;
	if (m_lastId == 8)
	 m_lastId = 0;
}

void	PhoneBook::InitConsole()
{
	int	status = 1;
	std::string input;

	while (status)
	{
		std::cout << "Choose an action :" << std::setw(10) << "ADD" << std::setw(10) << "SEARCH" << std::setw(10) << "EXIT" <<std::endl;
		std::getline(std::cin, input);
		//trim whitespaces
		if (!input.compare("ADD"))
		{
			std::cout << "insert first name" << std::endl;
			std::string firstName;
			std::getline(std::cin, firstName);
			std::cout << "insert last name" << std::endl;
			std::string lastName;
			std::getline(std::cin, lastName);
			std::cout << "insert nickname" << std::endl;
			std::string nickName;
			std::getline(std::cin, nickName);
			std::cout << "insert phone number" << std::endl;
			std::string number;
			std::getline(std::cin, number);
			std::cout << "insert darkest secret" << std::endl;
			std::string secret;
			std::getline(std::cin, secret);
			AddContact(Contact(firstName, lastName, nickName, number, secret, m_lastId));
		}
		else if (!input.compare("SEARCH"))
		{
			std::getline(std::cin, input);
			// std::cout<<static_cast<int>(input[0] - '0')<<std::endl;
			if (input.length() > 1 || input.empty())
				std::cout << "Invalid contact id" << std::endl;
			else if (input[0] > '9' || input[0] < '0')
				std::cout << "Invalid contact id" << std::endl;
			else
				SearchContact(static_cast<int>(input[0] - '0'));
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
