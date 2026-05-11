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
		Contact	_Contacts[8];
		int		_lastId;
		std::string	trimString(std::string str) const;
		void	printContact(Contact &C) const;
};

#endif