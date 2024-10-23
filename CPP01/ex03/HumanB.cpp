/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:35 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 09:10:54 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) {
	setNameB(name);
	return;
}

HumanB::~HumanB( void ) {
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
	std::cout << "\t\t\t\t\tptr attack -> " << ptr << std::endl;
	if (ptr != NULL)
		std::cout << getNameB() << " attacks with their " << ptr->getType() << std::endl;
	else
		std::cout << getNameB() << " has no weapon" << std::endl;
	return;
}

void	HumanB::setWeapon( Weapon club ) {
	this->ptr = &club;
	std::cout << "\t\t\t\t\tptr -> " << ptr << std::endl;
	std::cout << "\t\t\t\t\t&club -> " << &club << std::endl;
	return;
}
