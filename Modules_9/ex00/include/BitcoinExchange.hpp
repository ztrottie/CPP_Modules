/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:42:59 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/19 14:13:08 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
private:
	std::map<int, float>	_database;	
	bool				_isDbOpen;
public:
	// Constructors / Destructor
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &inst);
	~BitcoinExchange();

	// Operator Overload
	BitcoinExchange& operator=(const BitcoinExchange &rhs);

	// Functions
	void openDb();
	void closeDb();
	void doConversion(const std::string &fileName);
	float closestValue(const int &idate);
};

// BitcoinExchange_HPP