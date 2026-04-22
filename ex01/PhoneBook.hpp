#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook();
		void	Input();
		void	AddContact(Contact newContact);
		void	SearchContact(int id);
		~PhoneBook();
	private:
		Contact	m_Contacts[8];//replace with array<Contact, 8> maybe???
		int		m_lastId;
};

#endif