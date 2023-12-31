/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:50:43 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 10:36:58 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
private:
	const std::string _name;
	int	_grade;
public:
	// Constructors / Destructor
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &inst);
	~Bureaucrat();
	// Operator Overload
	Bureaucrat& operator=(const Bureaucrat &rhs);

	// Functions
	void				increment(int amount);
	void				decrement(int amount); 
	std::exception		GradeTooLowException();
	std::exception		GradeTooHighException();
	const std::string	&getName() const;
	const int			&GetGrade() const;
	void				signForm(AForm &inst);
	void				executeForm(AForm &inst);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & inst);
// Bureaucrat_HPP