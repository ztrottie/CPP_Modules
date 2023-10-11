/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:41:37 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/10 12:41:38 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Harl.hpp"

int main(void) {
	Harl		bob;

	bob.complain("DEBUG");
	bob.complain("WARNING");
	bob.complain("INFO");
	bob.complain("ERROR");

	return (0);
}