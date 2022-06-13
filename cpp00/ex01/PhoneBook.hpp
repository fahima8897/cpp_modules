/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:41 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/13 15:32:01 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>

#include "Contact.hpp"

class PhoneBook
{
private :
	Contact	_listContact[8];
	int		_nbContact;

public:
	PhoneBook();
	~PhoneBook();
	void	create_contact();
	
};

#endif
