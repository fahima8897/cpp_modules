/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:53:22 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/03 20:51:38 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0), _vector()
{
    std::cout << "Default constructor Span called" << std::endl;
}

Span::Span(unsigned int nb) : _N(nb), _vector()
{
    std::cout << "Constructor Span called" << std::endl;
}

Span::Span(Span const &src)
{
    *this = src;
}

Span &Span::operator=(Span const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;
    this->_N = rhs._N;
    return (*this);
}


Span::~Span()
{
    std::cout << "Destructor Span called" << std::endl;
}

void Span::addNumber(int nb)
{
    if (this->_vector.size() == _N)
        throw Span::addNumberException();
    _vector.push_back(nb);
}

void Span::addNumbrMulti(int nb)
{
    int t;
    srand(time(NULL));
 
    for(int i = 0; i < nb; i++)
    {
        if(_vector.size() == _N)
            throw Span::addNumberException();
        t = rand() % _N;
        _vector.push_back(t);
    }
}

int Span::longestSpan()
{
    int min;
    int max;
    
    if (_vector.empty() || _vector.size() <= 1)
        throw Span::distanceException();
    min = *std::min_element(_vector.begin(), _vector.end()); 
    max = *std::max_element(_vector.begin(), _vector.end());

    return (max - min); 
}

int Span::shortestSpan()
{
    std::list<int>	tmp(_vector);
	unsigned int	min = UINT_MAX;
    
    if (_vector.empty() || _vector.size() <= 1)
        throw Span::distanceException();
    tmp.sort();
	for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
	{
		std::list<int>::iterator	next = it;
		++next;
		min = std::min<unsigned int>(std::abs(*it - *next), span);
	}
    
    return (min);
}

const char* Span::addNumberException::what() const throw()
{
    return ("Cannot add another number because Span is full!");
}

const char *Span::distanceException::what() const throw()
{
    return ("Span empty or distance not found!");
}

