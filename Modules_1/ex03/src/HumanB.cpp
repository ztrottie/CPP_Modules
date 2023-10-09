/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:13 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:14 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
using std::cout;
using std::endl;

HumanB::HumanB(std::string name) : name_(name) {
	return ;
}

HumanB::HumanB(std::string name, Weapon &weapon) : name_(name), weapon_(&weapon) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) const {
	cout << this->name_ << " attacks with their " << this->weapon_->getType() << endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon_ = &weapon;
	return;
}
