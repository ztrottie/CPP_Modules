/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:21:08 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/22 13:53:17 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name_("DT_name") {
	std::cout << "Default DiamondTrap constructor " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst) : ClapTrap(inst), ScavTrap(inst), FragTrap(inst) {
	std::cout << "Copy DiamondTrap constructor " << std::endl;
	*this = inst;
}

DiamondTrap:DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),  {
	cout << "DiamondTrap " << this->name_ << " constructor" << endl;
	this->attackDamage_ = 30;
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
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
