/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:53:25 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/03 20:47:46 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <time.h>
#include <limits.h>
#include <list>

class Span
{
private:

    unsigned int _N;
    std::vector<int> _vector;
    
    class addNumberException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class distanceException : public std::exception
    {
        virtual const char *what() const throw();
    };
    
public:

    /*  Constructeurs   */
    Span();
    Span(unsigned int N);

    /*  Constructeur de recopie */
    Span(Span const &src);

    /*  operateur d'affectation */
    Span &operator=(Span const &rhs);
    
    /*  Destructeur */
    ~Span();
    
    /*  Methode */
    void addNumber(int nb);
    void addNumbrMulti(int nb);
    int shortestSpan();
    int longestSpan();
};

#endif