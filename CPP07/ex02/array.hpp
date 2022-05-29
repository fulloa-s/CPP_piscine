/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:47:00 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/29 17:59:56 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include <limits.h>

template < typename T >
class Array
{
    T *_array;
    unsigned int _n;
    
    public:

    Array(): _array(NULL), _n(0){};
    Array(unsigned int n): _n(n){ this->_array = new T[n]();}
    Array(Array const &obj){ 
        
        if(!obj._array)
        {
            this->_array = NULL;
            this->_n = 0;
        }
        else
        {
            this->_n = obj._n;
            this->_array = new T[this->_n]();
            for(unsigned int i = 0; i < this->_n ; i++)
                this->_array[i] = obj._array[i];
        }
    }
    ~Array(){ delete []_array;}
    Array &operator=(Array const &obj){

        if(this->_array)
            delete []_array; 
        if(!obj._array)
            this->_array = NULL;
        else
        {
            this->_n = obj._n;
            this->_array = new T[this->_n]();
            for(unsigned int i = 0; i < this->_n ; i++)
                this->_array[i] = obj._array[i];
        }
        return(*this);
    }
    T &operator[](unsigned int const &i){

        if(i > this->_n - 1)
            throw std::runtime_error("Error with the array's index!");
        else
            return(this->_array[i]);
    }
    unsigned int const &size() const {

        return(this->_n);
    } 
};


#endif