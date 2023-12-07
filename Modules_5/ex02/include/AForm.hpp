/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:01:45 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:40 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_status;
	const int			_gradeSign;
	const int			_gradeExec;
public:
	// Constructors / Destructor
	AForm();
	AForm(std::string name, int gradeSign, int gradeExec);
	AForm(const AForm &inst);
	virtual ~AForm();

	// Operator Overload
	AForm& operator=(const AForm &rhs);

	// Functions
	std::exception GradeTooLowException();
	std::exception GradeTooHighException();
	const std::string &getName() const;
	const bool	&getStatus() const;
	const int	&getGradeSign() const;
	const int	&getGradeExec() const;
	void		beSigned(Bureaucrat &inst);
	virtual	void	execute(Bureaucrat const & executor) = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & inst);
// Form_HPP