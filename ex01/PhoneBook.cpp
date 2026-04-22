#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_lastId = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::SearchContact(int id)
{
	for (int i = 0; i < 8; i++)
	{
		if (m_Contacts[i].getId() == id)
		{
			m_Contacts[i].printContact();
			return ;
		}
	}
	std::cout << "Invalid contact id" << std::endl;
}

void	PhoneBook::AddContact(Contact newContact)
{
	m_Contacts[m_lastId] = newContact;
	m_lastId++;
	if (m_lastId == 8)
	 m_lastId = 0;
}
