/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:59:54 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/29 13:50:41 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include <iostream>
#include <ostream>
#include <stdexcept>

Intern::Intern() {
	std::cout << "Default intern constructor " << std::endl;
}

Intern::Intern(const Intern &inst) {
	std::cout << "Copy intern constructor " << std::endl;
	*this = inst;
}

Intern::~Intern() {
	std::cout << "intern destructor" << std::endl;
}

Intern& Intern::operator=(const Intern &rhs) {
	std::cout << "intern operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}

AForm	*Intern::makeForm(std::string name, std::string target) const {
	std::string	functions[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int i = 0;
	while (i < 3 && functions[i] != name)
		i++;
	AForm *form = NULL;
	switch (i) {
		case 0:
			form = new RobotomyRequestForm(target);
			break;
		case 1:
			form = new ShrubberyCreationForm(target);
			break;
		case 2:
			form =  new PresidentialPardonForm(target);
			break;
		default:
			throw std::invalid_argument("Intern cannot create Invalid form!");
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}