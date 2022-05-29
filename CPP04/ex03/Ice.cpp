/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:01 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 14:09:14 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){

    this->_type = "ice";
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(){

    std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj) {

    *this = obj;
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator= (const Ice &obj){

    this->_type = obj._type;
    return(*this);
}

std::string const &Ice::getType() const{

    return(this->_type);
}

AMateria *Ice::clone() const {

    AMateria *tmp = new Ice(*this);
    return(tmp);
    
}

void Ice::use(ICharacter &target){

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}