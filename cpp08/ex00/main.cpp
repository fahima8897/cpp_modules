/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:48:01 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/04 12:11:55 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::cout << "---- Test with container List ----" << std::endl;
    try
    {
        std::list<int> tab;
    
        tab.push_back(52);
        tab.push_back(1);
        tab.push_back(102);
        tab.push_back(23);
        std::cout << "Elements is the list : ";
        for (std::list<int>::iterator it = tab.begin(); it != tab.end(); it++)
            std::cout << *it << ", ";
        std::cout << std::endl;
        std::list<int>::iterator itEasyfind = easyfind(tab, 13);
        std::cout << "result of easyfind : " << *itEasyfind << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    std::cout << "---- Test with container Vector ----" << std::endl;
    try
    {
        std::vector<int> vtab;
    
        vtab.push_back(52);
        vtab.push_back(1);
        vtab.push_back(102);
        vtab.push_back(23);
        vtab.push_back(95);
        vtab.push_back(2);
        std::cout << "Elements is the list : ";
        for (std::vector<int>::iterator it = vtab.begin(); it != vtab.end(); it++)
            std::cout << *it << ", ";
        std::cout << std::endl;
        std::vector<int>::iterator itEasyfind = easyfind(vtab, 95);
        std::cout << "result of easyfind : " << *itEasyfind << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}