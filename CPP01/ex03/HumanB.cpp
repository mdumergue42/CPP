/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:35 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 13:02:34 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::setNameB(std::string Name) {
	this->_name = Name;
	return;
}

HumanB::HumanB( std::string name ) : ptr(NULL), _name(name) {
	setNameB(name);
	return;
}

HumanB::~HumanB( void ) {
	return;
}

std::string	HumanB::getNameB(void) const {
	return this->_name;
}


void	HumanB::attack() {
	if (ptr != NULL)
		std::cout << getNameB() << " attacks with their " << ptr->getType() << std::endl;
	else
		std::cout << getNameB() << " has no weapon" << std::endl;
	return;
}

void	HumanB::setWeapon( Weapon & club ) {
	this->ptr = &club;
	return;
}
