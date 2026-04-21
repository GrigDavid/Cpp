#pragma once

#include <string>
#include "Contact.hpp"


class PhoneBook{
	public:
		PhoneBook();
		void	AddContact(Contact newContact);
		Contact	SearchContact(int id);
		~PhoneBook();
	private:
		Contact	Contacts[8];
		int		id;
};