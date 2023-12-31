/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:46 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:47 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
using std::cout;
using std::endl;

Zombie::Zombie(std::string name) : name_(name) {
	cout << this->name_ << " got bitten!!!" << endl;
	return;
}

Zombie::Zombie(void) {
	return;
}

Zombie::~Zombie(void) {
	cout << this->name_ << " Killed" << endl;
	return;
}

void Zombie::announce(void) const {
	cout << this->name_ <<": BraiiiiiiinnnzzzZ..." << endl;
	return;
}
