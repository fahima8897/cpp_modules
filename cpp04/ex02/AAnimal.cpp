/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:52:07 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:12:14 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Default constructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(std::string str)
{
    type = str;
    std::cout << "constructor AAnimal called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
   std::cout << "Copy constructor AAnimal called" << std::endl;
   *this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    std::cout << "Copy assignment operator AAnimal called" << std::endl;
    this->type = rhs.type;
    return(*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "I am an AANIMALLLLL!!" << std::endl;
}