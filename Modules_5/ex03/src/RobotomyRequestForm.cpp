/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:19:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/28 17:05:14 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include <chrono>
#include <ostream>
#include <stdexcept>
#include <cstdlib>
#include <thread>

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "Default RobotomyRequestForm constructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst) {
	std::cout << "Copy RobotomyRequestForm constructor " << std::endl;
	*this = inst;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	std::cout << "RobotomyRequestForm operator = overload" << std::endl;
	if (this != &rhs) {
		
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) {
	std::chrono::seconds duration(1);
	
	if (executor.GetGrade() > this->getGradeExec())
		throw std::invalid_argument("grade too low!");
	std::cout << "**PERSING NOISE**" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::this_thread::sleep_for(duration);
		std::cout << "..." << std::endl;
	}
	std::this_thread::sleep_for(duration);
	srand(time(NULL) + rand());
	if ((rand() % 2 + 1) == 1)
		std::cout << this->_target << " as been Robotomised with Success!" << std::endl;
	else
		std::cout << this->_target << " Robotomy Failed!" << std::endl;
}