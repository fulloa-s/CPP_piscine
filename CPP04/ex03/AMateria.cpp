/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:45:30 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 14:19:11 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){

    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type){

    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(){

    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj){

    *this = obj;
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator= (const AMateria &obj){

    std::cout << "AMateria assegnation called, makes no sense be careful" << std::endl;
    this->_type = obj._type; 
    return(*this);
}

std::string const &AMateria::getType() const{

    return(this->_type);
}

void AMateria::use(ICharacter &target){

    std::cout << "* uses " << this->_type << " at " << target.getName() << " *" << std::endl;
}