/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:40:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/30 15:00:51 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nb;
}

Fixed	&Fixed::operator=(const Fixed &nb)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_entier = nb.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_entier);
}

void	Fixed::setRawBits(int const raw)
{
	this->_entier = raw;
}