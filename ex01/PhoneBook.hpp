#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(const Contact& newContact);
		void	listContacts() const;
		void	displayContact(int id);
		void	initConsole();
	private:
		Contact	_Contacts[8];
		int		_lastId;
		bool	_filled;
		std::string	trimString(std::string str) const;
		void	printContactTabbed(const Contact &C) const;
		void	printContact(const Contact &C) ;
};

#endif