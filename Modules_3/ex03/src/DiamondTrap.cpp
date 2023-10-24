/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:08 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/24 14:45:41 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap("_clap_name"), FragTrap("_clap_name") {
	std::cout << "Default DiamondTrap constructor " << std::endl;
	this->attackDamage_ = FragTrap::get_defAttackDamage();
	this->hitPoints_ = FragTrap::get_defAttackDamage();
	this->energyPoints_ = ScavTrap::get_defEnergyPoint();
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst) : ClapTrap(inst), ScavTrap(inst), FragTrap(inst) {
	std::cout << "Copy DiamondTrap constructor " << std::endl;
	*this = inst;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), name_(name) {
	cout << "DiamondTrap " << this->name_ << " constructor" << endl;
	return;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout << "DiamondTrap operator = overide" << std::endl;
	if (this != &rhs) {
		this->name_ = rhs.name_;
		this->attackDamage_ = rhs.attackDamage_;
		this->energyPoints_ = rhs.energyPoints_;
		this->hitPoints_ = rhs.hitPoints_;
	}
	return *this;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoami(void) const {
	cout << "Hello i am " << this->name_ << " and my clap name is " << ClapTrap::name_ << std::endl;
	return;
}