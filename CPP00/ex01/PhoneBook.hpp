/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:25:24 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/10 21:58:42 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Principal.hpp"

class	PhoneBook {

public :

//	PhoneBook(void);
//	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);
	Contact	directory[8];
};

#endif
