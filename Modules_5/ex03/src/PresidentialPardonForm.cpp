/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:45:23 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 10:55:32 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "Default PresidentialPardonForm constructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &inst) {
	std::cout << "Copy PresidentialPardonForm constructor " << std::endl;
	*this = inst;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	std::cout << "PresidentialPardonForm operator = overload" << std::endl;
	if (this != &rhs) {
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) {
	if (executor.GetGrade() > this->getGradeExec())
		throw GradeTooLowException();
	else if (!this->getStatus())
		throw std::invalid_argument("not signed!");
	std::cout << "mr/mrs " << this->_target << " you've been pardonned by the fabulous Zaphod Beeblebrox!!!!!!!" << std::endl;
}