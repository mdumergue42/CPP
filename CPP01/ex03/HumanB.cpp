/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:35 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 14:44:08 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ) {
	std::cout << "Constructor called HumanB" << std::endl;
	return;
}

HumanB::~HumanB( void ) {
	std::cout << "Destructor called HumanB" << std::endl;
	return;
}

std::string	HumanB::getNameB(void) const {
	return this->_name;
}

void	HumanB::setNameB(std::string Name) {
	this->_name = Name;
	return;
}

void	HumanB::attack() {
	std::cout << getNameB() << "attacks with their" << ref->getType() << std::endl;
	return;
}
