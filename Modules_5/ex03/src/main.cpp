/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:43:03 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/13 12:56:03 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"
#include <exception>

int main(void)
{
	try {
		Intern lara;
		AForm *form = lara.makeForm("robotomy request", "michel");
		std::cout << form->getName() << std::endl;
		Bureaucrat tommy("tom", 1);
		Bureaucrat jimmy("jimmy", 2);
		Bureaucrat michel("michel", 100);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		michel = jimmy;
		tommy.signForm(*form);
		jimmy.executeForm(*form);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		// delete form;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
