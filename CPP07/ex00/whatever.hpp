/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:55:15 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/29 14:44:11 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include <limits.h>

template< typename T>
void swap(T &a, T &b)
{
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template< typename T>
const T &min( T &x, T &y)
{
    return( x < y ? x : y);
}

template< typename T>
const T &max( T &x, T &y)
{
    return( x > y ? x : y);
}

// class Awesome
// {
//     public:

//     Awesome(void) : _n(0) {}
//     Awesome( int n ) : _n( n ) {}
//     Awesome & operator= (Awesome & a) { _n = a._n; return *this; } 
//     bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//     bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//     bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } 
//     bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } 
//     bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//     bool operator<=( Awesome const & rhs ) const {return (this->_n <= rhs._n); }
//     int get_n() const { return _n; }
    
//     private:
//     int _n;
    
//     };

// std::ostream & operator<<(std::ostream & o, const Awesome &a) {
//     o << a.get_n();
//     return o;
// }

#endif