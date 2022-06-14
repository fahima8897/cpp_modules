/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:41 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/14 16:53:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include <cstdlib>

#include "Contact.hpp"

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
	void	phonebook_display();
	
		/* Accessors */
	int		get_nbContact(void) const;
};

#endif
