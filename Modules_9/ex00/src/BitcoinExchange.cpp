/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:43:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/20 14:24:26 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include <exception>
#include <map>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <fstream>

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
		_database = rhs._database;
		_isDbOpen = rhs._isDbOpen;
	}
	return *this;
}

static float valueParsing(const std::string &rawValue, const bool db) {
	float fValue;
	try {
		fValue = std::stof(rawValue);
	} catch (std::exception &e) {
		throw std::invalid_argument("Conversion failed => " + rawValue);
	}
	if (!db && fValue > 1000) {
		throw  std::invalid_argument("too large number.");
	}
	else if (fValue < 0) {
		throw std::invalid_argument("not a positive number.");
	}
	return fValue;
}

static unsigned int dateParsing(const std::string &rawDate) {
	unsigned int date = 0;
	std::string value;
	std::stringstream ss(rawDate);
	int i = 0;
	while (std::getline(ss, value, '-')) {
		int iValue = 0;
		bool error = false;
		try {
			iValue = std::stoi(value);
		} catch (std::exception &e) {
			error = true;
		}
		switch (i) {
			case 0:
				if (error || iValue < 0)
					throw std::invalid_argument("bad input => " + rawDate);
				else
				 	date += iValue * 10000;
				break;
			case 1:
				if (error || !(iValue >= 1 && iValue <= 12))
					throw std::invalid_argument("bad input => " + rawDate);
				else
					date += iValue * 100;
				break;
			case 2:
				if (error || !(iValue >= 1 && iValue <= 31))
					throw std::invalid_argument("bad input => " + rawDate);
				else
					date += iValue;
				break;
		}
		i++;
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
			std::string	rawValue;
			std::getline(ss, rawDate, ',');
			std::getline(ss, rawValue);
			try {
				unsigned int iDate = dateParsing(rawDate);
				float fValue = valueParsing(rawValue, true);
				this->_database.insert(std::pair<int, float>(iDate, fValue));
			} catch (std::exception &e) {
				std::cout << "Error: "<< e.what() << std::endl;
			} 
		}
	}
	db.close();
}

void	BitcoinExchange::closeDb() {
	_database.empty();
	_isDbOpen = false;
}

float	BitcoinExchange::closestValue(const int &iDate) {
	if (this->_database[iDate])
		return this->_database[iDate];
	int smallestDate = 0;
	for (std::map<int, float>::const_iterator it = _database.begin(); it != _database.end(); it++) {
		int tmpDate = it->first;
		if (tmpDate > smallestDate && tmpDate < iDate)
			smallestDate = tmpDate;
	}
	return _database[smallestDate];
}

void	BitcoinExchange::doConversion(const std::string &fileName) {
	std::ifstream ifs;
	std::string str;

	ifs.open(fileName);
	while (std::getline(ifs, str)) {	
		if (std::isdigit(str[0])) {
			std::string sdate;
			std::stringstream ss(str);
			std::string rawDate;
			std::string	rawValue;
			std::getline(ss, rawDate, '|');
			std::getline(ss, rawValue);
			try {
				int iDate = dateParsing(rawDate);
				float fValue = valueParsing(rawValue, false);
				std::cout << rawDate << " => " << rawDate << " = " << closestValue(iDate) * fValue << std::endl;
			} catch (std::exception &e) {
				std::cout << "Error: "<< e.what() << std::endl;
			} 
		}
	}
	ifs.close();
}