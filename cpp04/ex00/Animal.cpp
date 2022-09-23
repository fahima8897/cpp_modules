/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:52:07 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/15 15:29:11 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor Animal called" << std::endl;
}

Animal::Animal(std::string str)
{
    type = str;
    std::cout << "constructor Animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(const Animal &src)
{
   std::cout << "Copy constructor Animal called" << std::endl;
   *this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (&rhs == this)
        return *this;
    std::cout << "Copy assignment operator Animal called" << std::endl;
    this->type = rhs.type;
    return(*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "I am an ANIMALLLLL!!" << std::endl;
}