/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:50:55 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/24 13:40:00 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include <exception>
#include <stdexcept>

Bureaucrat::Bureaucrat() : _name(NULL), _grade(150) {
	std::cout << "Default Bureaucrat constructor " << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(0) {
	if (grade < 1)
		GradeTooHighException();
	if (grade > 150)
		GradeTooLowException();
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

Bureaucrat &Bureaucrat::operator++() {
	std::cout << "trying to increment " << this->_name << std::endl;
	if (this->_grade == 1)
		GradeTooHighException();
	else
		--this->_grade;
	return *this;
}

Bureaucrat &Bureaucrat::operator--() {
	std::cout << "trying to decrement " << this->_name << std::endl;
	if (this->_grade == 150)
		GradeTooLowException();
	else
		++this->_grade;
	return *this;
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

void	Bureaucrat::signForm(Form &inst) {
	try {
		inst.beSigned(*this);
		std::cout << _name << " signed " << inst.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << _name << " couldn't sign " << inst.getName() << " because " << e.what() << std::endl;
	}
}

std::exception Bureaucrat::GradeTooLowException() {
	throw std::invalid_argument("Grade too low!");
}

std::exception Bureaucrat::GradeTooHighException() {
	throw std::invalid_argument("Grade too high!");
}