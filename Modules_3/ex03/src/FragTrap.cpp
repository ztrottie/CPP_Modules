/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:55:10 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/22 12:04:05 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default FragTrap constructor " << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	cout << "FragTrap " << this->name_ << " constructor" << endl;
	this->attackDamage_ = 30;
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	return;
}

FragTrap::FragTrap(const FragTrap &inst) : ClapTrap(inst) {
	std::cout << "Copy FragTrap constructor " << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "FragTrap operator = overide" << std::endl;
	if (this != &rhs) {
		this->name_ = rhs.name_;
		this->attackDamage_ = rhs.attackDamage_;
		this->energyPoints_ = rhs.energyPoints_;
		this->hitPoints_ = rhs.hitPoints_;
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::string line;

	cout << "Do you want to high five " << this->name_ << "? Y\\N: ";
	std::getline(std::cin, line);
	if (std::cin.fail())
		return;
	if (line[0] == 'Y')
		cout << "You did!" << endl;
	else if (line[0] == 'N')
		cout << "You didn't" << endl;
	else
		cout << "Not a valid answer you TWAT!" << endl;
	return;
}