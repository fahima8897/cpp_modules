/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:37 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/15 16:03:53 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstdlib>
#include <string>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_secret;
	
public:

		/* Constructors, Destructors */
	Contact();
	Contact(std::string s1, std::string s2, std::string s3,
	std::string s4, std::string s5);
	~Contact();
	
		/* Accessors */
	std::string get_firstName(void) const;
	std::string get_lastName(void) const;
	std::string get_nickName(void) const;
	std::string get_phoneNumber(void) const;
	std::string get_secret(void) const;
	
		/* Methods */
	std::string add_infosContact(std::string info);
	Contact	set_infosContact();
};

#endif
