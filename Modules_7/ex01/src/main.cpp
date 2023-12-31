/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:36:05 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 10:35:27 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int main(void) {
	{
		std::string array[] = {"salut", "ayo", "vachier"};
		iter(array, 3, print<std::string>);
	}
	{
		int array[] = {1, 2, 3};
		iter(array, 3, print);
		iter(array, 3, increment);
		iter(array, 3, increment);
		iter(array, 3, print);
	}
}