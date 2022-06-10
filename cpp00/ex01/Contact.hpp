/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:37 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/10 16:53:22 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
private:
	std::string	name;
	std::string	lastName;
	std::string	nickname;
	int			phoneNumber;
	std::string	secret;
	
public:
	Contact();
	~Contact();
};

#endif
