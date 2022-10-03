/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:57:56 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/03 17:27:34 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iomanip>
#include <iostream>
#include <stack>
#include <algorithm>


template<typename T>
class MutantStack : public std::stack<T>
{
private:
    /* data */
public:

    /*  constructeur    */
    MutantStack() {};

    /*  constructeur de recopie */
    MutantStack(MutantStack<T> const &src){*this = src;}
    
    /*  operateur d'affectation */
    MutantStack &operator=(MutantStack<T> const &rhs)
    {
        if (&rhs == this)
            return *this;
        this->c = rhs.c;
        return *this;
    }
    
    /*  Destructeur */
    ~MutantStack() {};

    /*  Iterateur   */
    typedef typename std::deque<T>::iterator iterator;
    
    /*  Methodes    */
    iterator begin()
    {
        return (this->c.begin());
    }

    iterator end()
    {
        return (this->c.end());
    }
};

#endif