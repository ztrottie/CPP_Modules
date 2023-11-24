/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:50:43 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/24 13:36:47 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include "Form.hpp"

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
	Bureaucrat &operator++();
	Bureaucrat &operator--();

	// Functions
	std::exception		GradeTooLowException();
	std::exception		GradeTooHighException();
	const std::string	&getName() const;
	const int			&GetGrade() const;
	void				signForm(Form &inst);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & inst);
// Bureaucrat_HPP