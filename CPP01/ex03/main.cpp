/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:48 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 09:11:48 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		std::cout << "\t\t\t\t\tmain addresse1 -> " << &club << std::endl;
		jim.setWeapon(club);
		std::cout << "\t\t\t\t\tmain addresse -> " << &club << std::endl;
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
