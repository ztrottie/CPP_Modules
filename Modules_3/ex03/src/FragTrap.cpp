/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:55:10 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/24 14:56:54 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default FragTrap constructor " << std::endl;
	this->attackDamage_ = defAttackDamage_;
	this->hitPoints_ = defHitPoint_;
	this->energyPoints_ = defEnergyPoint_;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	cout << "FragTrap " << this->name_ << " constructor" << endl;
	this->attackDamage_ = defAttackDamage_;
	this->hitPoints_ = defHitPoint_;
	this->energyPoints_ = defEnergyPoint_;
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
		cout << "You did CBT!" << endl;
	else if (line[0] == 'N')
		cout << "You didn't BOZO" << endl;
	else
		cout << "Not a valid answer you TWAT!" << endl;
	return;
}

int FragTrap::get_defHitPoints(void)  const {
	return defHitPoint_;
}

int FragTrap::get_defAttackDamage(void)  const {
	return defAttackDamage_;
}