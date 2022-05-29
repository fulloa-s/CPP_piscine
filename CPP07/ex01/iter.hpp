/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:47:00 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/29 15:51:53 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include <limits.h>

template < typename P >
void print(P const &type)
{
    std::cout << type << " modificato" << std::endl;
}


template < typename A, typename L >
void    iter(A const *array, L const &i, void (*funct)(A const &type))
{
    for(int j = 0; j < i; j++)
        funct(array[j]);
} 

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; } 
    
//     private: 
//     int _n;
    
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
//     o << rhs.get();
//     return o;
// } 

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; } 

#endif