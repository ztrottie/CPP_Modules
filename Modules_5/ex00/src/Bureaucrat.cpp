/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:50:55 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/29 10:48:49 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(NULL), _grade(150) {
	std::cout << "Default Bureaucrat constructor " << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(0) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &inst) {
	std::cout << "Copy Bureaucrat constructor " << std::endl;
	*this = inst;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat operator = overload" << std::endl;
	if (this != &rhs) {
		this->_grade = rhs._grade;
	}
	return *this;
}

void	Bureaucrat::increment(int amount) {
	std::cout << "trying to increment " << this->_name << std::endl;
	if (this->_grade - amount < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= amount;
}

void	Bureaucrat::decrement(int amount) {
	std::cout << "trying to decrement " << this->_name << std::endl;
	if (this->_grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += amount;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", Bureaucrat grade " << rhs.GetGrade() << ".";
	return o;
}

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

const int &Bureaucrat::GetGrade() const {
	return this->_grade;
}
