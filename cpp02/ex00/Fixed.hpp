/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:39:51 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/28 13:50:46 by fboumell         ###   ########.fr       */
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
	static const int	_entierConst;
	
public:

	/*  constructeurs & destructeurs    */
		Fixed();
		Fixed()
		~Fixed();
};

#endif