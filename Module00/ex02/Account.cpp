/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:15:48 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 01:19:23 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime> 
#include <iostream>
#include <string>

/*-------------initial the static members-------------*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*--------geters for the static members--------*/

int     Account::getNbAccounts( void )
{
    return _nbAccounts;
}
int     Account::getTotalAmount( void )
{
    return _totalAmount;
}
int     Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}
int     Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

/*---------display accounts infos----------*/

void     Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts  << 
    ";total:" << _totalAmount << ";deposits:"
    << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals 
    << std::endl;
}

/*-------- Constructor and deconstructor ---------*/

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";closed" << std::endl;
    _totalAmount -= _amount;
    _nbAccounts--;
    _totalNbDeposits -= _nbDeposits;
    _totalNbWithdrawals -= _nbWithdrawals;
}

/*---------Methods--------*/
void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    std::cout << "index:"  << _accountIndex
    << ";p_amount:" << p_amount << 
    ";deposit:" << deposit << ";amount:" << _amount << 
     ";nb_deposits:" << _nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    int p_amount = _amount;
    if (withdrawal <= _amount)
    {
        _amount -= withdrawal;
        _nbWithdrawals ++;
        _totalNbWithdrawals ++;
        _totalAmount -= withdrawal;

        std::cout << "index:"  << _accountIndex
        << ";p_amount:" << p_amount << 
        ";withdrawal:" << withdrawal << ";amount:" << _amount << 
        ";nb_withdrawals:" << _nbWithdrawals << std::endl;

        return true;
    }
    
    std::cout << "index:"  << _accountIndex
    << ";p_amount:" << p_amount << 
    ";withdrawal:" <<
    "refused" << std::endl;
    
    return false;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";deposits:" << _nbDeposits 
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

/*----------display timestamp-------*/

void Account::_displayTimestamp( void )
{
	std::time_t now = std::time(NULL);
	std::tm* local_time = std::localtime(&now);
	
	std::cout << "[";
	std::cout << local_time->tm_year + 1900;
	
	// Month
	if (local_time->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << local_time->tm_mon + 1;
	
	// Day
	if (local_time->tm_mday < 10)
		std::cout << "0";
	std::cout << local_time->tm_mday;
	
	std::cout << "_";
	
	// Hour
	if (local_time->tm_hour < 10)
		std::cout << "0";
	std::cout << local_time->tm_hour;
	
	// Minute
	if (local_time->tm_min < 10)
		std::cout << "0";
	std::cout << local_time->tm_min;
	
	// Second
	if (local_time->tm_sec < 10)
		std::cout << "0";
	std::cout << local_time->tm_sec;
	
	std::cout << "] ";
}