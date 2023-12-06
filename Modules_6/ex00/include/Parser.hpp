/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:05 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/05 18:50:45 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <_stdio.h>
#include <iostream>

enum eType {
	none,
	intValue,
	floatValue,
	doubleValue,
	charValue
};

class Parser
{
private:
	std::string _str;
	int			_type;
	int			_precision;
	int			_intValue;
	float		_floatValue;
	double		_doubleValue;
	char		_charValue;
public:
	// Constructors / Destructor
	Parser();
	Parser(std::string str);
	Parser(const Parser &inst);
	~Parser();

	// Operator Overload
	Parser& operator=(const Parser &rhs);
	operator float();
	operator int();
	operator double();
	operator char();

	// Functions
	void setType();
	void isInt();
	void isFloat();
	void isDouble();
	void isChar();
	void printValue();
};

// Parser_HPP