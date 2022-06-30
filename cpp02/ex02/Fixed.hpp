/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:39:51 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/30 16:13:55 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iomanip>
#include <iostream>
#include <cmath>

class Fixed
{
private:

	int _entier;
	static const int	_entierConst = 8;
	
public:

	/*  constructeur & destructeur   */
		Fixed();
		Fixed(const int entierConst);
		Fixed(const float floatConst);
		~Fixed();
	
	/*	constructeur de recopie	*/
		Fixed(const Fixed &nb_entier);
		
	/*	operateur d'affectation	*/
		Fixed	&operator = (const Fixed &nb);
		
		bool	operator>(const Fixed &nb) const;
		bool	operator<(const Fixed &nb) const;
		bool	operator>=(const Fixed &nb) const;
		bool	operator<=(const Fixed &nb) const;
		bool	operator==(const Fixed &nb) const;
		bool	operator!=(const Fixed &nb) const;

		Fixed	operator+(const Fixed &nb) const;
		Fixed	operator-(const Fixed &nb) const;
		Fixed	operator*(const Fixed &nb) const;
		Fixed	operator/(const Fixed &nb) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);	
	
	/*	Methods	*/
		int 				getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &flux, const Fixed &nb);

#endif