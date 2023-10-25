/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:08 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 10:05:45 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap("_clap_name"), FragTrap("_clap_name") {
	std::cout << "Default DiamondTrap constructor " << std::endl;
	this->attackDamage_ = FragTrap::get_defAttackDamage();
	this->hitPoints_ = FragTrap::get_defHitPoints();
	this->energyPoints_ = ScavTrap::get_defEnergyPoint();
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst) : ClapTrap(inst), ScavTrap(inst), FragTrap(inst) {
	cout << "DiamondTrap " << this->name_ << " copy constructor" << endl;
	*this = inst;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), name_(name) {
	cout << "DiamondTrap " << this->name_ << " constructor" << endl;
	this->attackDamage_ = FragTrap::get_defAttackDamage();
	this->hitPoints_ = FragTrap::get_defHitPoints();
	this->energyPoints_ = ScavTrap::get_defEnergyPoint();
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap " << this->name_ << " Destructor" << endl;
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
	if (this->hitPoints_ == 0) {
		cout <<"DiamondTrap " << this->name_ << " is dead can't speak! DUH!" << endl;
		return;
	}
	else if (this->energyPoints_ == 0) {
		cout <<"DiamondTrap " << this->name_ << " is exhaused can't even tell a word! DAMN!" << endl;
		return; 
	}
	cout << "Hello i am " << this->name_ << " and my clap name is " << ClapTrap::name_ << std::endl;
	return;
}

int	DiamondTrap::get_hitPoint(void) const {
	return this->hitPoints_;
}

int	DiamondTrap::get_attackDamage(void) const {
	return this->attackDamage_;
}

int	DiamondTrap::get_energyPoints(void) const {
	return this->energyPoints_;
}
