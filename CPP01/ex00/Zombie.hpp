/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:28:01 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/17 14:18:09 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {

	public :
		void		announce(void);

		Zombie(std::string name_z);
		~Zombie(void);
	private :
		std::string	_name;
};

void		randomChump(std::string name);
Zombie*		newZombie(std::string name);

#endif
