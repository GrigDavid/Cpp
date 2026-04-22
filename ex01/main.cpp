#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook ph;
	Contact	c;
	c.setContact("Gagik", "Surenyan", "Gagoooo", "011223344", "likes being pet", 0);
	ph.AddContact(c);
	ph.SearchContact(0);
}