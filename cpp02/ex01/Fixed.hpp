/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:39:51 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/05 12:06:45 by fboumell         ###   ########.fr       */
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
	
	/*	Methods	*/
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &flux, Fixed const &nb);

#endif