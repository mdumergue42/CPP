/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:28 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 14:31:21 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( void ) {
	std::cout << "Constructor called HumanA" << std::endl;
	return;
}

HumanA::~HumanA( void ) {
	std::cout << "Destructor called HumanA" << std::endl;
	return;
}

std::string	HumanA::getNameA(void) const {
	return this->_name;
}

void	HumanA::setNameA(std::string Name) {
	this->_name = Name;
	return;
}
void	HumanA::attack() {
	return;
}
