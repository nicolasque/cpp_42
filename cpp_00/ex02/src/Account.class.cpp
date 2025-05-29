/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 00:51:15 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/29 19:42:05 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include "Colors.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
    std::tm* timeinfo = std::localtime(&now);

	std::cout << "["
	<< std::setfill('0')
	<< std::setw(4) << (timeinfo->tm_year + 1900)  // Año
	<< std::setw(2) << (timeinfo->tm_mon + 1)      // Mes (0-11, por eso +1)
	<< std::setw(2) << timeinfo->tm_mday           // Día
	<< "_"
	<< std::setw(2) << timeinfo->tm_hour           // Hora
	<< std::setw(2) << timeinfo->tm_min            // Minutos
	<< std::setw(2) << timeinfo->tm_sec            // Segundos
	<< "] ";
}


Account::Account(int initial_deposit)
{
	if (initial_deposit < 0)
		return ;
	this->_accountIndex = _nbAccounts;
	_nbAccounts ++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << \
			"index:" << BLUE <<_accountIndex << RESET \
			<< ";amount:" << BLUE << initial_deposit << RESET \
			<<";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << \
			"index:" << BLUE <<_accountIndex << RESET \
			<< ";amount:" << BLUE << this->_amount << RESET \
			<<";closed" << std::endl;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout <<
	"acounts:" << BLUE << _nbAccounts << RESET \
	";total:" << BLUE << _totalAmount << RESET \
	";deposits:" << BLUE << _totalNbDeposits << RESET \
	";withdrawals:" << BLUE << _totalNbWithdrawals << RESET << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<
	"index:" << BLUE <<_accountIndex << RESET \
	<< ";amount:" << BLUE << _amount << RESET \
	<< ";deposits:" << BLUE << _nbDeposits << RESET \
	<< ";withdrawals:" << BLUE << _nbWithdrawals << RESET \
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount;

	p_amount = this->_amount;
	_displayTimestamp();
	if (deposit < 0)
	{
		std::cout <<
		"index:" << BLUE <<_accountIndex << RESET \
		<< ";p_amount:" << BLUE << p_amount << RESET \
		<< ";deposit:refused"
		<< std::endl;
		return ;
	}
	this->_amount += deposit;
	this->_nbDeposits ++;
	_totalNbDeposits ++;
	std::cout <<
	"index:" << BLUE <<_accountIndex << RESET \
	<< ";p_amount:" << BLUE << p_amount << RESET \
	<< ";deposit:" << BLUE << deposit << RESET \
	<< ";amount:" << BLUE << _amount << RESET \
	<< ";nb_deposits:" << BLUE << _nbDeposits << RESET \
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount;

	p_amount = this->_amount;
	_displayTimestamp();
	if (withdrawal > this->_amount || withdrawal < 0)
	{
		std::cout <<
		"index:" << BLUE <<_accountIndex << RESET \
		<< ";p_amount:" << BLUE << p_amount << RESET \
		<< ";withdrawal:refused"
		<< std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals ++;
	_totalNbDeposits ++;
	std::cout <<
	"index:" << BLUE <<_accountIndex << RESET \
	<< ";p_amount:" << BLUE << p_amount << RESET \
	<< ";withdrawal:" << BLUE << withdrawal << RESET \
	<< ";amount:" << BLUE << _amount << RESET \
	<< ";nb_withdrawals:" << BLUE << _nbDeposits << RESET \
	<< std::endl;
	return (true);
}
