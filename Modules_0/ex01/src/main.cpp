#include <iostream>
#include "../include/Phonebook.hpp"
#include "../include/Contact.hpp"

static void	add_contact(Phonebook *phonebook) {
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	if (std::cin.fail())
		return ;

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	if (std::cin.fail())
		return ;

	std::cout << "Enter nick name: ";
	std::getline(std::cin, nickName);
	if (std::cin.fail())
		return ;

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	if (std::cin.fail())
		return ;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (std::cin.fail())
		return ;

	if (firstName == "" || lastName == "" || nickName == "" || phoneNumber == "" || darkestSecret == "") {
		std::cout << "Wrond input you should fill every field!" << std::endl;
		return;
	}

	Contact	newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

		phonebook->push_back();
		phonebook->set_contact(0, newContact);
		if (phonebook->get_nbContact() < 8)
			phonebook->set_nbContact(phonebook->get_nbContact() + 1);
	return;
}

static void	print_search(Phonebook *Phonebook) {
	uint8_t	max;
	uint8_t	nb_contact;

	nb_contact = Phonebook->get_nbContact();
	if (nb_contact < 8)
		max = nb_contact;
	else
		max = 8;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for(int i = 0; i < max; i++) {
		Contact	contact = Phonebook->get_contact(i);
		std::string	index = std::to_string(i);
		std::string firstName = contact.get_firstName();
		std::string lastName = contact.get_lastName();
		std::string nickName = contact.get_nickName();

		index.insert(index.begin(), 10 - index.length(), ' ');
		if (firstName.length() < 10)
			firstName.insert(firstName.begin(), 10 - firstName.length(), ' ');
		else if (firstName.length() > 10) {
			firstName.resize(9);
			firstName.resize(10, '.');
		}

		if (lastName.length() < 10)
			lastName.insert(lastName.begin(), 10 - lastName.length(), ' ');
		else if (lastName.length() > 10) {
			lastName.resize(9);
			lastName.resize(10, '.');
		}
		
		if (nickName.length() < 10)
			nickName.insert(nickName.begin(), 10 - nickName.length(), ' ');
		else if (nickName.length() > 10) {
			nickName.resize(9);
			nickName.resize(10, '.');
		}

		std::cout << "|" << index << "|" << firstName << "|" << lastName << "|" << nickName << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	return;
}

static bool	search(Phonebook *phonebook) {
	std::string	str;

	if (phonebook->get_nbContact() > 0) {
		print_search(phonebook);
		std::cout << "Enter contact index: ";
		std::getline(std::cin, str);
		if (std::cin.fail())
			return false;
		if (str.length() == 1 && std::isdigit(str[0])) {
			int choice = std::stoi(str);
			if ((choice <= 7 && !phonebook->printContact(choice)) || choice > 7)
				std::cout << "Wrong index mate!" << std::endl;
		}
		else
			std::cout << "Input wasn't valid MATE!" << std::endl;
	}
	else
		std::cout << "You have no contacts yet!" << std::endl;
	return true;
}

int main(void) {
	Phonebook	phonebook;
	std::string	str;

	while (str != "EXIT") {
		std::cout << "Enter command: ";
		std::getline(std::cin, str);
		if (std::cin.fail())
			break;
		if (str == "ADD")
			add_contact(&phonebook);
		if (str == "SEARCH")
			if (!search(&phonebook))
				break;
	}
	return 0;
}
