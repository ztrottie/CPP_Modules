/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:55:10 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 10:04:05 by ztrottie         ###   ########.fr       */
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
	cout << "FragTrap " << this->name_ << " Destructor" << endl;
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

	if (this->hitPoints_ == 0) {
		cout <<"FragTrap " << this->name_ << " is dead can't ask for a high five! DUH!" << endl;
		return;
	}
	else if (this->energyPoints_ == 0) {
		cout <<"FragTrap " << this->name_ << " is exhaused can't even lift his hand! DAMN!" << endl;
		return; 
	}
	cout << "FragTrap: Do you want to high five " << this->name_ << "?🖐" << endl;
	return;
}