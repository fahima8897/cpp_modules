/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:40:14 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/16 14:13:34 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor Brain called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Copy constructor Brain called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Copy assignment operator Brain called" << std::endl;
    if (&rhs == this)
        return *this;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

std::string Brain::getIdeas(int idea)
{
    return (this->_ideas[idea]);
}

void Brain::setIdea(std::string str, int idea)
{
    this->_ideas[idea] = str;
    return ;
}