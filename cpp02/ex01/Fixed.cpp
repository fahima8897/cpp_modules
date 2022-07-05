/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:40:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/05 12:06:43 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int entierConst)
{
	std::cout << "Int constructor called" << std::endl;
	this->_entier = entierConst << this->_entierConst;
}

Fixed::Fixed(const float floatConst)
{
	std::cout << "Float constructor called" << std::endl;
	this->_entier = roundf(floatConst * (float)(1 << this->_entierConst));
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
	return (this->_entier);
}

void	Fixed::setRawBits(int const raw)
{
	this->_entier = raw;
}

int		Fixed::toInt() const 
{
	return (this->_entier >> this->_entierConst);
}

float	Fixed::toFloat() const
{
	return ((float) this->_entier / (float)(1 << this->_entierConst));
}


std::ostream	&operator<<(std::ostream &flux, Fixed const &nb)
{
	flux << nb.toFloat();
	return (flux);
}