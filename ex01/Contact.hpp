#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{
	public:
		Contact();
		void	setContact(
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string darkestSecret,
			int id);
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		int			getId() const;
		void		printContact() const;
		~Contact();
	private:
		std::string	m_firstName;
		std::string	m_lastName;
		std::string	m_nickname;
		std::string	m_phoneNumber;
		std::string	m_darkestSecret;
		int			m_id;
		std::string	trimString(std::string str) const;
};

#endif