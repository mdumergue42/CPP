/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:24:40 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/13 12:40:52 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void	Account::displayStatus( void ) const {
	return;
}

int	Account::getNbDeposits( void ) {
	return _totalnbDeposits;
}

void	Account::makeDeposit( int deposit ) {
	deposit = getNbDeposits();
}

void	Account::displayAccountsInfos( void ) {

}

bool	Account::makeWithdrawal( int withdrawal ) {

}


