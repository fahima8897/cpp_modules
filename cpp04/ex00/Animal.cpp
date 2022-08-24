/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:52:07 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/23 14:22:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor Animal called" << std::endl;
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
    std::cout << "Copy assignment operator Animal called" << std::endl;
    this->_type = rhs._type;
    return(*this);
}

Animal makeSound()
{
    std::cout << ""
}