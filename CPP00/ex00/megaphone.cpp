/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:18:26 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 09:18:14 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for(int j = 1; j < ac; j++)
	{
		for (int i = 0; av[j][i]; i++)
			av[j][i] = std::toupper(av[j][i]);
		std::cout << av[j];
	}
	std::cout << std::endl;
	return 0;
}
