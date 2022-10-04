/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:53:22 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/04 15:09:12 by fboumell         ###   ########.fr       */
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
    this->_vector = rhs._vector;
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


void Span::addRandomNbr()
{
    srand(time(NULL));
    
    if (this->_vector.size() == _N)
        throw Span::addNumberException();
    for (unsigned int i = 0; i < _N; i++)
        addNumber(rand() % _N);
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
    std::vector<int> tmp(_vector);
 	unsigned int	min = UINT_MAX;
    
    if (_vector.empty() || _vector.size() <= 1)
        throw Span::distanceException();
    // for (std::vector<int>::iterator h = _vector.begin(); h < _vector.end(); h++)
    //     std::cout << "_vector : " << *h << " ";
    // std::cout << std::endl;
    sort(tmp.begin(), tmp.end());
    // for (std::vector<int>::iterator i = tmp.begin(); i < tmp.end(); i++)
    //     std::cout << "tmp : " << *i << " ";
    // std::cout << std::endl;
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
	{
		std::vector<int>::iterator	next = it;
		++next;
		min = std::min<unsigned int>(std::abs(*it - *next), min);
	}
    return (min);
}

void Span::addMulti(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (static_cast<unsigned int>(end - begin) > (_N - _vector.size()))
        throw addNumberException();
    else
        _vector.insert(_vector.end(), begin, end);
}

const char* Span::addNumberException::what() const throw()
{
    return ("Cannot add another number because Span is full!");
}

const char *Span::distanceException::what() const throw()
{
    return ("Span empty or distance not found!");
}

