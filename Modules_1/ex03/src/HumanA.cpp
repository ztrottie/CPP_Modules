/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:09 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:10 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(&weapon){
	return;
}

HumanA::~HumanA(void) {
	return;
}

void	HumanA::attack(void) const {
	cout << this->name_ << " attacks with their " << this->weapon_->getType() << endl;
	return;
}
