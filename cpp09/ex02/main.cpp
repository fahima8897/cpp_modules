/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:59:02 by fboumell          #+#    #+#             */
/*   Updated: 2023/03/22 14:40:00 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac <= 2)
        std::cout << "Error" << std::endl;
    else
    {
        PmergeMe value = PmergeMe();
        for (int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            for (size_t i = 0; i < str.size(); i++)
            {
                if (str[i] == '+')
                    continue ;
                if (!isdigit(str[i]) || str.size() > 10 || (str.size() == 10 && str.compare(STR_INT_MAX) > 0))
                {
                    std::cout << "Error" << std::endl;
                    return 0;
                }
            }
            value.getVector().push_back(atoi(str.c_str()));
            value.getDeque().push_back(atoi(str.c_str()));
        }
        std::cout << "Before: ";
        std::vector<int>::iterator it = value.getVector().begin();
        for (; it != value.getVector().end(); it++)
        {
            if (it == (value.getVector().end() - 1))
                std::cout << *it << std::endl;
            else
                std::cout << *it << " ";
        }
        value.merge_sort();
    }
    return 0;
}