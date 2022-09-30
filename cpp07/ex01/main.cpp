/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:44:12 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/30 17:23:31 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &i)
{
    i++;
}

void Wwrite(const char &c)
{
    std::cout << c;
}

int main()
{
    int tab[7] = {0, 1, 2, 3, 4, 5, 6};
    const char *str = "Hola que tal Pedro!";
    
    iter(tab, 10,  &increment);
    for (int i = 0; i < 7; i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
    
    iter(str, 20, &Wwrite);
}
