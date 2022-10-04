/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:48:03 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/04 15:26:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <list>
#include <vector>

class NotFoundException : public std::exception
{
    virtual const char *what() const throw()
    {
        return ("Occurence not found!");
    }
};

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;
    
    it = find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return (it);
}

#endif