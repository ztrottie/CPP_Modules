#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		~Contact();
		std::string	get_firstName(void) const;
		std::string get_lastName(void) const;
		std::string get_nickName(void) const;
		std::string get_phoneNumber(void) const;
		std::string get_darkestSecret(void) const;
};

#endif