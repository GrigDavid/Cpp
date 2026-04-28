#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook();
		void	Input();
		void	AddContact(const Contact& newContact);
		void	SearchContact(int id);
		void	InitConsole();
		~PhoneBook();
	private:
		Contact	m_Contacts[8];//replace with array<Contact, 8> maybe???
		int		m_lastId;
		std::string	trimString(std::string str) const;
		void	printContact(Contact &C) const;
};

#endif