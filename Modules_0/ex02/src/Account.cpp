#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << Account::_nbAccounts++ << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	return;
}

Account::Account(void) {
	return;
}


Account::~Account( void ){
	Account::_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
	return;
}

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

int	Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << " " << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
	return;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_depostits:" << this->_nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (this->_amount > withdrawal) {
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->checkAmount() << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	std::cout << "withdrawal:refused" << std::endl;
	return false;
}

// int		Account::checkAmount( void ) const {
// 	std::cout << 
// }

void	Account::_displayTimestamp( void ) {
	std::time_t now = std::time(NULL);
	struct std::tm* timeinfo = std::localtime(&now);

	char timestamp[20];
	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << timestamp;
}

//accounts:8;total:20049;deposits:0;withdrawals:0