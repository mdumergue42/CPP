/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:28:04 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/17 14:17:49 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie*	new_z = newZombie("Malloc");

	randomChump("Pas_Malloc");
	new_z->announce();
	delete new_z;
	return 0;
}
