/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:00:52 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:43 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	const std::string _target;
public:
	// Constructors / Destructor
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &inst);
	~ShrubberyCreationForm();

	// Operator Overload
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);

	// Functions
	virtual	void	execute(Bureaucrat const & executor);
};

// ShrubberyCreationForm_HPP