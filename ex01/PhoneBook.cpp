#pragma once

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{};

PhoneBook::~PhoneBook()
{};

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