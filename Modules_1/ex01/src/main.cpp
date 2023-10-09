/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:36 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:37 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void) {
	Zombie *horde;
	int		nb = 42;

	horde = zombieHorde(42, "gros criss de sale");
	for (int i = 0; i < nb; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
