/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:44:09 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/02 11:54:32 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iomanip>
#include <iostream>

template<typename T>
void iter(T *tab, size_t size, void(*f)(T &ref))
{
    for (size_t i = 0; i < size; i++)
        f(tab[i]);
    return ;
}

template<typename T>
void iter(T const *tab, size_t const size,  void(*f)(T const &ref))
{
    for (size_t i = 0; i < size; i++)
        f(tab[i]);
    return;
}

#endif
