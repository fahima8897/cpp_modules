/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:46:08 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:13:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
    std::cout << "Default constructor WrongAAnimal called" << std::endl;
}

WrongAAnimal::WrongAAnimal(std::string str)
{
    _type = str;
    std::cout << "constructor WrongAAnimal called" << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
    std::cout << "Destructor WrongAAnimal called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &src)
{
   std::cout << "Copy constructor WrongAAnimal called" << std::endl;
   *this = src;
}

WrongAAnimal &WrongAAnimal::operator=(const WrongAAnimal &rhs)
{
    std::cout << "Copy assignment operator WrongAAnimal called" << std::endl;
    this->_type = rhs._type;
    return(*this);
}

std::string WrongAAnimal::getType() const
{
    return (this->_type);
}

void WrongAAnimal::makeSound() const
{
    std::cout << "I am the Wrong AANIMALLLLL!!" << std::endl;
}