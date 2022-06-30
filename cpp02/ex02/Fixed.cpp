/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:40:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/30 16:17:02 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
}

Fixed::Fixed(const int entierConst){
	this->_entier = entierConst << this->_entierConst;
}

Fixed::Fixed(const float floatConst){
	this->_entier = roundf(floatConst * (float)(1 << this->_entierConst));
}

Fixed::Fixed(const Fixed &nb){
	*this = nb;
}

Fixed	&Fixed::operator=(const Fixed &nb){
	_entier = nb.getRawBits();
	return *this;
}

Fixed::~Fixed(){
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

Fixed &Fixed::min(Fixed &a, Fixed &b) {

	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b) {

	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {

	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {

	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &flux, Fixed const &nb)
{
	flux << nb.toFloat();
	return (flux);
}

bool	Fixed::operator>(Fixed const &nb) const 
{
	if (this->_entier > nb._entier)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &nb) const 
{
	if (this->_entier < nb._entier)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &nb) const 
{
	if (this->_entier >= nb._entier)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &nb) const 
{
	if (this->_entier <= nb._entier)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &nb) const 
{
	if (this->_entier == nb._entier)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &nb) const 
{
	if (this->_entier != nb._entier)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &nb) const 
{
	return (Fixed(this->toFloat() + nb.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &nb) const 
{
	return (Fixed(this->toFloat() - nb.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &nb) const 
{
	return (Fixed(this->toFloat() * nb.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &nb) const 
{
	return (Fixed(this->toFloat() / nb.toFloat()));
}

Fixed	&Fixed::operator++() 
{
	this->_entier++;
	return (*this);
}

Fixed	Fixed::operator++(int) 
{
	Fixed	fixed = *this;
	
	this->_entier++;
	return (fixed);
}

Fixed	&Fixed::operator--() 
{
	this->_entier--;
	return (*this);
}

Fixed	Fixed::operator--(int) 
{
	Fixed	fixed = *this;

	this->_entier--;
	return (fixed);
}
