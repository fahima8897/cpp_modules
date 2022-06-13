/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:22 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/13 16:40:39 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact(std::string s1, std::string s2, std::string s3,
	std::string s4, std::string s5) : _firstName(s1), _lastName(s2), _nickname(s3),
    _phoneNumber(s4), _secret(s5){
}

std::string Contact::get_firstName(void) const
{
    return (this->_firstName);
}

std::string Contact::get_lastName(void) const
{
    return (this->_lastName);
}

std::string Contact::get_nickName(void) const
{
    return (this->_nickname);
}

std::string Contact::get_phoneNumber(void) const
{
    return (this->_phoneNumber);
}

std::string Contact::get_secret(void) const
{
    return (this->_secret);
}


