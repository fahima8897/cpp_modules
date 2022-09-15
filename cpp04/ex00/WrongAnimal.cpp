/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:46:08 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/15 15:30:13 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string str)
{
    _type = str;
    std::cout << "constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
   std::cout << "Copy constructor WrongAnimal called" << std::endl;
   *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (&rhs == this)
        return *this;
    std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
    this->_type = rhs._type;
    return(*this);
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "I am the Wrong ANIMALLLLL!!" << std::endl;
}