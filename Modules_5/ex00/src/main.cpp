/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:43:03 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/24 10:53:59 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include <exception>

int main(void)
{
	try {
		Bureaucrat tommy("tom", -1);
		Bureaucrat jimmy("jimmy", 2);
		std::cout << jimmy << std::endl;
		Bureaucrat michel("michel", 100);
		std::cout << michel << std::endl;
		michel = jimmy;
		++jimmy;
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		for (int i = 0; i < 150; i++)
			--michel;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
}
