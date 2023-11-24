/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:01:55 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/24 13:41:17 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"
#include <exception>
#include <stdexcept>
#include <string>

Form::Form() : _name(""), _status(false), _gradeSign(150), _gradeExec(150) {
	std::cout << "Default Form constructor " << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _status(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (gradeExec < 1 || gradeSign < 1)
		GradeTooHighException();
	if (gradeExec > 150 || gradeSign > 150)
		GradeTooLowException();
} 

Form::Form(const Form &inst) : _gradeSign(150), _gradeExec(150) {
	std::cout << "Copy Form constructor " << std::endl;
	*this = inst;
}

Form::~Form() {
	std::cout << "Form destructor" << std::endl;
}

Form& Form::operator=(const Form &rhs) {
	std::cout << "Form operator = overload" << std::endl;
	if (this != &rhs) {
		this->_status = rhs._status;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
	o << rhs.getName() << " is form that require a grade " << rhs.getGradeSign() << " to be signed and a grade " << rhs.getGradeSign() << " to be executed and is currently ";
	if (rhs.getStatus())
		o << "signed!";
	else
		o << "unsigned!";
	return o;
}

const std::string	&Form::getName() const {
	return this->_name;
}

const bool	&Form::getStatus() const {
	return this->_status;
}

const int &Form::getGradeSign() const {
	return this->_gradeSign;
}

const int &Form::getGradeExec() const {
	return this->_gradeExec;
}

void	Form::beSigned(Bureaucrat &inst) {
	if (this->_status)
		throw std::invalid_argument("Already signed!");
	else if (inst.GetGrade() > this->_gradeSign)
		GradeTooLowException();
	else
		this->_status = true;
}

std::exception Form::GradeTooLowException() {
	throw std::invalid_argument("Grade too low!");
}

std::exception Form::GradeTooHighException() {
	throw std::invalid_argument("Grade too high!");
}
