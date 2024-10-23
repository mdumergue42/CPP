/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:28 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 08:50:07 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon & club ) : ref(club) {
	setNameA(name);
	club.getType();
	return;
}

HumanA::~HumanA( void ) {
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
	std::cout << getNameA() << " attacks with their " << ref.getType() << std::endl;
	return;
}
