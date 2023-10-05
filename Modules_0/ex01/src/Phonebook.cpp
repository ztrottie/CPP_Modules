#include <iostream>
#include "../include/Phonebook.hpp"
#include "../include/Contact.hpp"

Phonebook::Phonebook (void) {
	this->_nbContact = 0;
	// std::cout << "Phonebook Constructor" << std::endl;
	return;
}

Phonebook::~Phonebook (void) {
	// std::cout << "Phonebook Destructor" << std::endl;
	return;
}

int	Phonebook::get_nbContact(void) const {
	return (this->_nbContact);
}

Contact Phonebook::get_contact(int i) const {
	return (this->_contact[i]);
}

void	Phonebook::set_nbContact(int i) {
	this->_nbContact = i;
	return;
}

bool	Phonebook::printContact(int i) const {
	if (i >= 0 && i < this->_nbContact) {
		std::cout << "First Name: " << this->_contact[i].get_firstName() << std::endl;
		std::cout << "Last Name: " << this->_contact[i].get_lastName() << std::endl;
		std::cout << "Nick Name: " << this->_contact[i].get_nickName() << std::endl;
		std::cout << "Phone Number: " << this->_contact[i].get_phoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->_contact[i].get_darkestSecret() << std::endl;
		return true;
	}
	return false;
}

void	Phonebook::push_back(void) {
	for (int i = 7; i > 0; i--) 
		this->_contact[i] = this->_contact[i - 1];
	return;
}

void	Phonebook::set_contact(int i, Contact new_contact) {
	this->_contact[i] = new_contact;
	return;
}