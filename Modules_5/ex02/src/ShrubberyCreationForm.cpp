/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:01:00 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/29 10:49:57 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include <exception>
#include <fstream>
#include <stdexcept>
#define NB_TREE 10
#define NB_ROW 10

static const char * const tree[15] =	{
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⡿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢛⣿⡛⠁⣀⠉⠻⠦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣧⣰⣿⢿⣶⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣽⣿⣿⣿⡿⠃⡀⠛⠉⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⣿⣿⣿⣇⠀⣼⣿⣆⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣼⣿⣧⠙⢷⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣀⡀⠙⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠴⢿⣿⣿⣿⠿⠟⠻⢿⣿⣿⢿⣿⡶⠛⠷⠆⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⢀⣴⣶⣤⡈⠛⠀⣄⡉⠀⢰⡄⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣿⣿⣿⣶⣿⡄⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠉⠉⠀⠀⠿⠿⠛⠋⣿⣿⡟⠿⡿⠉⠛⠿⠿⠛⠋⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
};

ShrubberyCreationForm::ShrubberyCreationForm() {
	std::cout << "Default ShrubberyCreationForm constructor " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &inst) {
	std::cout << "Copy ShrubberyCreationForm constructor " << std::endl;
	*this = inst;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	std::cout << "ShrubberyCreationForm operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	std::ofstream output;
	
	if (executor.GetGrade() > this->getGradeExec())
		throw GradeTooLowException();
	output.open(this->_target + "_shrubbery");
	if (!output.is_open())
		throw std::invalid_argument("output file not opened");
	for (int k = 0; k < NB_ROW; k++)
	{
		for (int i = 0; i < 15; i++) {
			for (int j = 0; j < NB_TREE; j++)
				output << tree[i];
			output << std::endl;
		}
	}
	output.close();
}
