/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:01:55 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/13 12:55:38 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <exception>
#include <stdexcept>
#include <string>

AForm::AForm() : _name(""), _status(false), _gradeSign(150), _gradeExec(150) {
	std::cout << "Default AForm constructor " << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _status(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (gradeExec < 1 || gradeSign < 1)
		GradeTooHighException();
	if (gradeExec > 150 || gradeSign > 150)
		GradeTooLowException();
} 

AForm::AForm(const AForm &inst) : _gradeSign(150), _gradeExec(150) {
	std::cout << "Copy AForm constructor " << std::endl;
	*this = inst;
}

AForm::~AForm() {
	std::cout << "AForm destructor" << std::endl;
}

AForm& AForm::operator=(const AForm &rhs) {
	std::cout << "AForm operator = overload" << std::endl;
	if (this != &rhs) {
		this->_status = rhs._status;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs) {
	o << rhs.getName() << " is Aform that require a grade " << rhs.getGradeSign() << " to be signed and a grade " << rhs.getGradeSign() << " to be executed and is currently ";
	if (rhs.getStatus())
		o << "signed!";
	else
		o << "unsigned!";
	return o;
}

const std::string	&AForm::getName() const {
	return this->_name;
}

const bool	&AForm::getStatus() const {
	return this->_status;
}

const int &AForm::getGradeSign() const {
	return this->_gradeSign;
}

const int &AForm::getGradeExec() const {
	return this->_gradeExec;
}

void	AForm::beSigned(Bureaucrat &inst) {
	if (this->_status)
		throw std::invalid_argument("Already signed!");
	else if (inst.GetGrade() > this->_gradeSign)
		GradeTooLowException();
	else
		this->_status = true;
}

std::exception AForm::GradeTooLowException() const {
	throw std::invalid_argument("Grade too low!");
}

std::exception AForm::GradeTooHighException() const {
	throw std::invalid_argument("Grade too high!");
}
