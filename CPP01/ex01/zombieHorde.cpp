/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:32:50 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/17 15:53:27 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	
	Zombie*	newZ = new Zombie[N]();
	for (int i = 0; i < N; i++) {
		newZ[i].setName(name);
		newZ[i].announce();
	}
	return newZ;
}
