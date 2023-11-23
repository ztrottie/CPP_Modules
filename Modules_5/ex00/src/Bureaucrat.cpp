/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:50:55 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/23 14:02:51 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150), _name("") {
	std::cout << "Default Bureaucrat constructor " << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _grade(grade), _name(name) {
	if (grade)
}

Bureaucrat::Bureaucrat(const Bureaucrat &inst) {
	std::cout << "Copy Bureaucrat constructor " << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}