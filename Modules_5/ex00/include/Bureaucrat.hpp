/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:50:43 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/24 10:44:30 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	int	_grade;
public:
	class GradeTooHighException : public std::exception 
	{
		public:
			virtual const char* what() const throw() {
				return ("The grade is too high!");
			}
	};
	class GradeTooLowException : public std::exception 
	{
		public:
			virtual const char* what() const throw() {
				return ("The grade is too low!");
			}
	};
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
	const std::string &getName() const;
	const int &GetGrade() const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & inst);
// Bureaucrat_HPP