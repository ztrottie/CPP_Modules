/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:40:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/22 10:49:22 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main(void) {
	ScavTrap bob("Roger");
	ClapTrap will("William");
	ScavTrap jake("Jacob");
	//energy test
	for (int i = 0; i < 50; i++) {
		bob.attack("William");
		will.takeDamage(2);
		will.beRepaired(2);
		will.attack("Roger");
		bob.takeDamage(2);
		bob.beRepaired(2);
	}
	//hitpoint test

	bob.takeDamage(123432);
	will.takeDamage(1242341);
	
	bob.beRepaired(10);
	will.beRepaired(10);

	bob.attack("William");
	will.attack("Roger");

	bob.takeDamage(1);
	will.takeDamage(1);
	
	jake.takeDamage(12432423);
	jake.guardGate();
	jake.guardGate();
	return 0;
}
