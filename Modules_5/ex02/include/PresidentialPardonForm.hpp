/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:45:50 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:49 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	const std::string _target;
public:
	// Constructors / Destructor
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &inst);
	~PresidentialPardonForm();

	// Operator Overload
	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

	// Functions
	virtual	void	execute(Bureaucrat const & executor);
};

// PresidentialPardonForm_HPP