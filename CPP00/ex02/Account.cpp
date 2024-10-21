/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:24:40 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/17 14:20:38 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit ) {
	(void)initial_deposit;
	return;
}

Account::~Account(void) {
	return;
}

void	Account::displayStatus( void ) const {
	return;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

void	Account::makeDeposit( int deposit ) {
	(void)deposit;	
	return;
}

void	Account::displayAccountsInfos( void ) {

}

bool	Account::makeWithdrawal( int withdrawal ) {
	withdrawal = false;
	return withdrawal;
}

int	Account::_totalNbDeposits = 0;
