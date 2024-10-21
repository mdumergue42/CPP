/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:27:57 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/17 14:19:02 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name_z ) {
	this->_name = name_z;
	std::cout << "Constructor called ! The zombie " << name_z << " is created." << std::endl;
	return;
}

Zombie::~Zombie( void ) {
	std::cout << "Destructor called ! The zombie " << this->_name << " is destroyed." << std::endl;
	return;
}

void	Zombie::announce( void ) {
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
