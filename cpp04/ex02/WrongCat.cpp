/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:06:26 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:14:26 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAAnimal("WrongCat")
{
    std::cout << "Default constructor WrongCat called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "Copy constructor WrongCat called" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "Copy assignment operator WrongCat called" << std::endl;   
    this->_type = src._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Piou Piou Piou!" << std::endl;
}