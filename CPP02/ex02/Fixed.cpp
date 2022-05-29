/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:50:30 by francesco         #+#    #+#             */
/*   Updated: 2021/11/17 11:11:20 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    
    // std::cout << "Default constructor called" << std::endl;
    this->_raw = 0;
}

Fixed::Fixed(const int i) {
    
    // std::cout << "Int constructor called" << std::endl;
    this->_raw = i << this->_fract_bit;
    
}

Fixed::Fixed(const float f) {
    
    // std::cout << "Float constructor called" << std::endl;  
    this->_raw = (int)(roundf(f * (1 << this->_fract_bit)));
}

Fixed::~Fixed() {
    
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
    
    // std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed  &Fixed::operator =(const Fixed &obj) {
    
    // std::cout << "Assignation operator called" << std::endl;
	this->_raw = obj.getRawBits();
    return(*this);
}

bool    Fixed::operator == (const Fixed &obj) const {
     
    return(this->_raw == obj.getRawBits());
}

bool    Fixed::operator != (const Fixed &obj) const{
     
    return(this->_raw != obj.getRawBits());
}

bool    Fixed::operator > (const Fixed &obj) const{
     
    return(this->_raw > obj.getRawBits());
}

bool    Fixed::operator >= (const Fixed &obj) const{
     
    return(this->_raw >= obj.getRawBits());
}

bool    Fixed::operator < (const Fixed &obj) const{
     
    return(this->_raw < obj.getRawBits());
}

bool    Fixed::operator <= (const Fixed &obj) const{
     
    return(this->_raw <= obj.getRawBits());
}

int Fixed::getRawBits(void) const {
    
    return(this->_raw);
}

void Fixed::setRawBits(int const raw) {
    
    this->_raw = raw;
}

std::ostream &operator <<(std::ostream &output, const Fixed &obj){
    
    output << obj.toFloat();

    return(output);
}

 int   Fixed::toInt() const {
     
     return((int)(this->_raw >> this->_fract_bit));
 }

float  Fixed::toFloat() const {
     
     return((float)(this->_raw / (float)(1 << this->_fract_bit)));
 }

Fixed  Fixed::operator + (const Fixed &obj) const {
    
    Fixed tmp;
    
    tmp.setRawBits(this->_raw + obj.getRawBits());
    return (tmp);
}

Fixed  Fixed::operator - (const Fixed &obj) const {
    
    Fixed tmp;
    
    tmp.setRawBits(this->_raw - obj.getRawBits());
    return (tmp);
}

Fixed  Fixed::operator * (const Fixed &obj) const {
    
    Fixed tmp;
    
    tmp.setRawBits((this->_raw * obj.getRawBits()) >> this->_fract_bit);
    return (tmp);
}

Fixed  Fixed::operator / (const Fixed &obj) const {
    
    Fixed tmp;
    
    tmp.setRawBits((this->_raw << this->_fract_bit) / obj.getRawBits());
    return (tmp);
}

Fixed Fixed::operator ++(){
    
    this->setRawBits(++this->_raw);
    return(*this) ;
}

Fixed Fixed::operator ++(int){
    
    Fixed tmp(*this);
    
    operator++();
    return(tmp) ;
}

Fixed Fixed::operator --(){
    
    this->setRawBits(--this->_raw);
    return(*this) ;
}

Fixed Fixed::operator --(int){
    
    Fixed tmp(*this);
    
    operator--();
    return(tmp) ;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if(obj1 > obj2)
        return(obj2);
    return(obj1);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if(obj1 > obj2)
        return(obj2);
    return(obj1);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if(obj1 > obj2)
        return(obj1);
    return(obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if(obj1 > obj2)
        return(obj1);
    return(obj2);
}