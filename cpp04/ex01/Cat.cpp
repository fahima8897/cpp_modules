/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:57:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/15 16:57:24 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor Cat called" << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    delete _brain;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    _brain = new Brain();
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Copy assignment operator Cat called" << std::endl;  
    if (&rhs == this)
        return *this;
    delete _brain; // a revoir car quand on cree un objet sans pointeur il va allouer dynamiquement le _brain car dans c'est precise dans le constructeur
    this->type = rhs.type;
    _brain = new Brain();
    *(this->_brain) = *(rhs._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou Miaou!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->_brain);
}