/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:47:35 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/17 15:50:23 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	public :
		void	announce(void);
		void	setName(std::string name);
		Zombie();
		Zombie(std::string name_z);
		~Zombie();

	private :
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );
#endif
