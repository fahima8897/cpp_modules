/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:41 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/16 14:25:44 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"
#include <cctype>

class PhoneBook
{
private :
	Contact	_listContact[8];
	int		_nbContact;

public:
		/* Constructors, Destructors */
	PhoneBook();
	~PhoneBook();
	
		/* Methods */
	void	phonebook_starter();
	void	create_contact();
	std::string reduce_string(std::string info);
	bool	manage_index(std::string index);
	void	phonebook_display();
	

		/* Accessors */
	int		get_nbContact(void) const;
};

#endif
