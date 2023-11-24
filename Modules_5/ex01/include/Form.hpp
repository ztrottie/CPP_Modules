/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:01:45 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/24 13:29:57 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_status;
	const int			_gradeSign;
	const int			_gradeExec;
public:
	// Constructors / Destructor
	Form();
	Form(std::string name, int gradeSign, int gradeExec);
	Form(const Form &inst);
	~Form();

	// Operator Overload
	Form& operator=(const Form &rhs);

	// Functions
	std::exception GradeTooLowException();
	std::exception GradeTooHighException();
	const std::string &getName() const;
	const bool	&getStatus() const;
	const int	&getGradeSign() const;
	const int	&getGradeExec() const;
	void		beSigned(Bureaucrat &inst);
};

std::ostream & operator<<(std::ostream & o, Form const & inst);
// Form_HPP