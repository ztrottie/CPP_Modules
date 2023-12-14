/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:43:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/14 14:20:12 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include <cctype>
#include <sstream>
#include <stdexcept>
#include <string>
#include <system_error>

BitcoinExchange::BitcoinExchange() : _database(std::map<int, float>()), _isDbOpen(false) {
	std::cout << "Default BitcoinExchange constructor " << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &inst) {
	std::cout << "Copy BitcoinExchange constructor " << std::endl;
	*this = inst;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "BitcoinExchange destructor" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	std::cout << "BitcoinExchange operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}

static int dateParsing(const std::string &rawDate) {
	int date;
	std::string value;
	std::stringstream ss(rawDate);
	
	while (std::getline(ss, value, '-')) {
		int value = std::stoi(value);
	}
	return date;
}

void	BitcoinExchange::openDb() {
	std::ifstream db;
	std::string str;

	if (_isDbOpen)
		throw std::invalid_argument("Database already opened");
	db.open("data.csv");
	this->_isDbOpen = true;
	while (std::getline(db, str)) {	
		if (std::isdigit(str[0])) {
			std::string sdate;
			std::stringstream ss(str);
			std::string rawDate;
			std::string	value;
			std::getline(ss, rawDate, ',');
			std::getline(ss, value);
			for (int i = 0; rawDate[i]; i++) {
				if (rawDate[i] != '-')
					sdate += rawDate[i];
			}
			int iDate;
			float fValue;
			try {
				iDate = std::stoi(sdate);
				fValue = std::stof(value);
				this->_database.insert(std::pair<int, float>(iDate, fValue));
			} catch (std::overflow_error) {
				std::cout << "Error: too big number" << std::endl;
			}
		}
	}
	db.close();
}

void	BitcoinExchange::closeDb() {
	
}