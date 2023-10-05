#include <iostream>
#include "../include/Contact.hpp"

Contact::Contact (void) {
	// std::cout << "Constructor Contact" << std::endl;
	return;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	return;
}

Contact::~Contact (void) {
	// std::cout << "Destructor Contact" << std::endl;
	return;
}

std::string	Contact::get_firstName(void) const{
	return (this->_firstName);
}

std::string	Contact::get_lastName(void) const{
	return (this->_lastName);
}

std::string	Contact::get_nickName(void) const{
	return (this->_nickName);
}

std::string	Contact::get_phoneNumber(void) const{
	return (this->_phoneNumber);
}

std::string	Contact::get_darkestSecret(void) const{
	return (this->_darkestSecret);
}