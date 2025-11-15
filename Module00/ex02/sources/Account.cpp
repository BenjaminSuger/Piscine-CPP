/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:45:40 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/12 09:45:42 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*the command to do the diff command
 * diff <(sed 's/\[[^]]*\] //g' 19920104_091532.log) <(sed 's/\[[^]]*\] //g' test)
*/
void	Account::_displayTimestamp(void)
{
	//std::cout << "[19920104_091532] ";//let this i f the corrector want to test easily diff
	
	time_t now = std::time(0); //time passe since 1970
	tm *ltm = std::localtime(&now);//will allow me to access struct tm with localtime
	std::cout << "[" << 1900 + ltm -> tm_year << 1 + ltm -> tm_mon << ltm -> tm_mday << "_";
	std::cout << ltm -> tm_hour << ltm -> tm_min << ltm -> tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit >= 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";deposit:" << deposit;
		_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	}
	else
		std::cerr << "you cannot deposit a negative value" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal >= 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		if (withdrawal > _amount)
		{
			std::cout << ";withdrawal:refused" << std::endl;
			return (false);
		}
		std::cout << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << ";amount:" << checkAmount();
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl; 
	}
	else
		std::cerr << "you cannot withdraw a negative value" << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this -> _amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}
