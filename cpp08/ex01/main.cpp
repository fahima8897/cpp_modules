/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:52:30 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/04 15:33:54 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

    std::cout << "---- Test given in the subjet ----" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    std::cout << "---- Test with random numbers ----" << std::endl;
    try
    {
        Span sp = Span(136);
        sp.addRandomNbr();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "---- Other Tests ----" << std::endl;
    try
    {
        Span sp = Span(20);
        std::vector<int> tab;
        for (int it = 0; it < 19; it++)
            tab.push_back(rand() % 55);
        // for (std::vector<int>::iterator h = tab.begin(); h < tab.end(); h++)
        //     std::cout << "tab : " << *h << " ";
        std::vector<int>::iterator begin = tab.begin();
        std::vector<int>::iterator end = tab.end();
        sp.addMulti(begin, end);
        // std::cout << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
