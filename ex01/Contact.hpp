#pragma once

#include <string>

class Contact{
	public:
		Contact();
		void setContact(
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string darkestSecret);
		~Contact();
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};