/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:40:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 10:08:05 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main(void) {
	DiamondTrap zach("Zachary");

	cout << "hitPoints: " << zach.get_hitPoint() << endl;
	cout << "attackDamage: " << zach.get_attackDamage() << endl;
	cout << "energyPoint: " << zach.get_energyPoints() << endl;
	
	zach.whoami();
	zach.guardGate();
	zach.guardGate();
	zach.highFivesGuys();

	for (int i = 0; i < 51; i++) {
		zach.attack("zack");
	}
	zach.whoami();
	zach.guardGate();
	zach.guardGate();
	zach.highFivesGuys();
	return 0;
}
