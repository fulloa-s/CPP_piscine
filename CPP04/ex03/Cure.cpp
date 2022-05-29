/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:01 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 15:30:24 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){

    this->_type = "cure";
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure(){

    std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj) {

    *this = obj;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator= (const Cure &obj){

    this->_type = obj._type;
    return(*this);
}

std::string const &Cure::getType() const{

    return(this->_type);
}

AMateria *Cure::clone() const {

    AMateria *tmp = new Cure(*this);
    return(tmp);
    
}

void Cure::use(ICharacter &target){

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}