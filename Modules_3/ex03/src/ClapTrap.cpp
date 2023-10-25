/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:56:09 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 09:15:43 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints_(10), energyPoints_(10), attackDamage_(0) {
	cout << "Default ClapTrap constructor" << endl;
	return;
}

ClapTrap::ClapTrap(const std::string &name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
	cout << "ClapTrap " << this->name_ << " constructor" << endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &inst) {
	cout << "Copy ClapTrap constructor" << endl;
	*this = inst;
}

ClapTrap::~ClapTrap(void) {
	cout << "ClapTrap " << this->name_ << " Destructor" << endl;
	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	this->name_ = rhs.name_;
	this->attackDamage_ = rhs.attackDamage_;
	this->energyPoints_ = rhs.energyPoints_;
	this->hitPoints_ = rhs.hitPoints_;
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->hitPoints_ == 0) {
		cout << "ClapTrap " << this->name_;
		cout << " is dead, can't attack shit! RIP (no hitPoints left)" << endl;
	}
	else if (this->energyPoints_ == 0) {
		cout << "ClapTrap " << this->name_;
		cout << " is exhausted can't attack MATE! (no energyPoints left)" << endl;
	}
	else {
		--this->energyPoints_;
		cout << "ClapTrap " << this->name_ << " attacks " << target;
		cout << ", causing " << this->attackDamage_ << " points of damage" << endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints_ == 0) {
		cout << "ClapTrap " << this->name_;
		cout << " is dead! Isn't it weird to hit a dead body? RIP (no hitPoints left)" << endl;
		return;
	}
	this->hitPoints_ < amount ? this->hitPoints_ = 0 : this->hitPoints_ -= amount;
	cout << "ClapTrap " << this->name_ << " took " << amount << " damage! Big is too slow" << endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints_ == 0) {
		cout << "ClapTrap " << this->name_;
		cout << " is dead! can't repair! RIP (no hitPoints left)" << endl;
		return;
	}
	else if (this->energyPoints_ == 0) {
		cout << "ClapTrap " << this->name_ << " can't even repair!(no energyPoints left)" << endl;
	}
	
	else {
		--this->energyPoints_;
		this->hitPoints_ += amount;
		cout << "ClapTrap " << this->name_ << " repaired " << amount;
		cout << " hitPoints! For a total of " << this->hitPoints_ << endl;
	}
	return;
}
