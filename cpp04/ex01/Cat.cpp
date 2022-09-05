/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:57:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/05 13:27:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor Cat called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Copy assignment operator Cat called" << std::endl;   
    this->type = rhs.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou Miaou!" << std::endl;
}