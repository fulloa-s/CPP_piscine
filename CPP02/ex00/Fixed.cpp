/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:50:30 by francesco         #+#    #+#             */
/*   Updated: 2021/11/17 11:03:58 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    
    std::cout << "Default constructor called" << std::endl;
    this->_raw = 0;
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
    
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed  &Fixed::operator =(const Fixed &obj) {
    
    std::cout << "Assignation operator called" << std::endl;
	this->_raw = obj.getRawBits();
    return(*this);
}

int Fixed::getRawBits(void) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_raw);
}

void Fixed::setRawBits(int const raw) {
    
    this->_raw = raw;
}