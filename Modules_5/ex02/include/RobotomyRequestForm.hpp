/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:19:19 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/28 16:20:38 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
private:
	const std::string _target;
public:
	// Constructors / Destructor
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &inst);
	~RobotomyRequestForm();

	// Operator Overload
	RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);

	// Functions
	virtual	void	execute(Bureaucrat const & executor);
};

// RobotomyRequestForm_HPP