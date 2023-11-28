/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:43:03 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/25 10:55:22 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"
#include <exception>

int main(void)
{
	try {
		Form	pres("war treaty", 2, 2);
		std::cout << pres << std::endl;
		Bureaucrat tommy("tom", 1);
		Bureaucrat jimmy("jimmy", 2);
		std::cout << jimmy << std::endl;
		Bureaucrat michel("michel", 100);
		std::cout << michel << std::endl;
		// michel = jimmy;
		++jimmy;
		michel.signForm(pres);
		jimmy.signForm(pres);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
