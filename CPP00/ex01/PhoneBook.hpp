/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:25:24 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/12 18:14:48 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <cstring>

class	PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);
	void	printTabSearch(void);
	void	printContactFound(int);
	std::string	CutStr(std::string);

	Contact	directory[8];
};

#endif
