/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:59:18 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/29 10:17:31 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
	// Constructors / Destructor
	Intern();
	Intern(const Intern &inst);
	~Intern();

	// Operator Overload
	Intern& operator=(const Intern &rhs);

	// Functions
	AForm	*makeForm(std::string name, std::string target) const;
};

// Intern_HPP