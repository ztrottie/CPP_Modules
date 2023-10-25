/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:40:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 09:29:57 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void) {
	FragTrap jake("Jacob");

	// energy test
	for (int i = 0; i < 100; i++) {
		jake.highFivesGuys();
	}
	// hitpoint test

	
	jake.highFivesGuys();
	jake.takeDamage(4234234);
	jake.highFivesGuys();

	return 0;
}
