/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:43:03 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/28 17:10:00 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include <exception>

int main(void)
{
	try {
		Bureaucrat tommy("tom", 1);
		Bureaucrat jimmy("jimmy", 150);
		Bureaucrat michel("michel", 100);
		RobotomyRequestForm robot("michel");
		PresidentialPardonForm pardon("bob");
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		michel = jimmy;
		++jimmy;
		jimmy.executeForm(robot);
		jimmy.executeForm(pardon);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
