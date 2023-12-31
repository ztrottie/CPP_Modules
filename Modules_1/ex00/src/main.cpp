/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:14:14 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:14:31 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Zombie.hpp"

using std::cout;

int main(void) {
	Zombie	*zack;
	Zombie	*will;
	randomChump("antouene");
	randomChump("zach");
	randomChump("raph");
	zack = newZombie("zack");
	will = newZombie("will");
	zack->announce();
	will->announce();
	delete zack;
	delete will;
	return 0;
}