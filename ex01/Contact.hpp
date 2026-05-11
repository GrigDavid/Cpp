#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{
	public:
		Contact();
		Contact(const Contact& newCon);
		Contact(
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string darkestSecret,
			int id);
		Contact& operator=(const Contact& other);
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		int			getId() const;
		~Contact();
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_id;
};

#endif