/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:43:03 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 10:54:45 by ztrottie         ###   ########.fr       */
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
		AForm *robot = new RobotomyRequestForm("michel");
		AForm *pres = new PresidentialPardonForm("maurice");
		AForm *shrubbery = new ShrubberyCreationForm("coline");
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		michel = jimmy;
		jimmy.executeForm(*robot);
		jimmy.executeForm(*pres);
		jimmy.executeForm(*shrubbery);
		michel.increment(140);
		michel.signForm(*robot);
		michel.signForm(*pres);
		michel.signForm(*shrubbery);
		tommy.executeForm(*robot);
		tommy.executeForm(*pres);
		tommy.executeForm(*shrubbery);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		delete robot;
		delete pres;
		delete shrubbery;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
