/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:07:40 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/02 14:49:50 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iomanip>
#include <iostream>
#include <stdexcept>

template<class T>
class Array
{
private:
    
        T           *_array;
        unsigned int _size;

        class invalidIndex : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("Invalid index!");
            };
        };
        
public:

        /* Constructeurs */
		Array<T>()
		{
			std::cout << "Default Constructor Array called" << std::endl;
			this->_array = NULL;
			this->_size = 0;
		};
		Array<T>(unsigned int size): _size(size)
		{
			std::cout << "Constructor Array called" << std::endl;       
			this->_array = new T[size];
		};
        
        /* Constructeurs de recopie */
		Array<T> (Array<T> const &cpy)
		{
			std::cout << "Copy constructor Array called" << std::endl;
			*this = cpy;
		}
        
        /*  operateurs d'affectation    */
		T	&operator[](unsigned int index)
		{
			if (index < 0 || index >= this->_size)
				throw Array::invalidIndex();
			return (this->_array[index]);
		}
		Array<T>	&operator=(const Array<T> &rhs )
		{
			std::cout << "Assignment operator '=' called" << std::endl; 
			if (this == &rhs)
				return (*this);
			this->_size = rhs.size();
			this->_array = new T[this->size()];
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}
        
        /*  Desctructeur    */
		~Array()
		{
			std::cout << "Destructor Array called" << std::endl;
			if (this->size() > 0)
				delete [] (this->_array);
		};
        
        /*  Methode */
		unsigned int size() const
		{
			return (this->_size);
		}
};

#endif
