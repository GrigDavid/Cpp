#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void	initConsole();
	private:
		Contact		_Contacts[8];
		int			_lastId;
		bool		_filled;
		void		listContacts() const;
		void		displayContact(int id);
		std::string	trimString(std::string str) const;
		void		printContactTabbed(const Contact &C) const;
		void		printContact(const Contact &C) ;
		void		addContact(const Contact& newContact);
};

#endif