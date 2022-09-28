/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:39:27 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 17:55:57 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iomanip>
#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T const &min(T const &a, T const &b)
{
    if (a < b)
        return a;
    return b;
}

template<typename T>
T const &max(T const &a, T const &b)
{
    if (a > b)
        return a;
    return b;
}

#endif