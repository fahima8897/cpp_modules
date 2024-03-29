/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:39:51 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/30 17:12:07 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iomanip>
#include <iostream>

class Fixed
{
private:

	int _entier;
	static const int	_entierConst = 8;
	
public:

	/*  constructeur & destructeur   */
		Fixed();
		~Fixed();
	
	/*	constructeur de recopie	*/
		Fixed(const Fixed &nb_entier);
		
	/*	operateur d'affectation	*/
		Fixed	&operator = (const Fixed &nb);	
	
	/*	Accessors	*/
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif