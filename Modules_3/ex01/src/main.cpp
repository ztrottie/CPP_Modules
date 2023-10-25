/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:40:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 09:20:30 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main(void) {
	ScavTrap bob("Roger");
	ScavTrap jake("Jacob");
	
	//energy test
	for (int i = 0; i < 50; i++) {
		bob.attack("William");
		bob.takeDamage(2);
		bob.beRepaired(2);
	}

	bob.guardGate();

	//hitpoint test
	bob.takeDamage(123432);
	bob.beRepaired(10);
	bob.attack("William");
	bob.takeDamage(1);
	
	jake.guardGate();
	jake.guardGate();
	jake.takeDamage(12432423);
	jake.guardGate();
	return 0;
}
