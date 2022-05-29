/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:16:00 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 11:39:23 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name) {

    this->_name = name;
    for(int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    std::cout << "Character constructor called" << std::endl;
}

Character::~Character(){

    for(int i = 0; i < 4; i++)
    {
        if(this->_materia[i])
            delete(_materia[i]);
    }
    std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character &obj){

    *this = obj;
    std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator= (const Character &obj){

    this->_name = obj._name;
    for(int i = 0; i < 4; i++)
    {
        if(this->_materia[i])
            delete (this->_materia[i]);
        if(obj._materia[i])
        this->_materia[i] = obj._materia[i]->clone();
    }
    return(*this);
}

std::string const &Character::getName() const{

    return(this->_name);
}

void Character::equip(AMateria* m){

    if(m->getType() != "ice" && m->getType() != "cure")
    {
        std::cout << "------>Something goes wrong with equip AMateria, remember to delete obj to avoid Leaks!!!" << std::endl;
        return ;
    }
    for(int i = 0; i < 4; i++)
    {
        if(m == this->_materia[i])
        {
            return;
        }
        if(!this->_materia[i])
        {
            this->_materia[i] = m;
           return;
        }
    }
    std::cout << "------>Something goes wrong with equip AMateria, remember to delete obj to avoid Leaks!!!" << std::endl;
}

void Character::unequip(int idx){

    if(this->_materia[idx])
    {
        this->_materia[idx] = NULL;
        std::cout << "You're going to unequip AMateria, remember to delete obj to avoid Leaks!!!" << std::endl;
    }
}

void Character::see_equip(){
    
    for(int i = 0; i < 4; i++)
    {
        if(!this->_materia[i])
            std::cout << "[" << i << "] empty" << std::endl;
        else
            std::cout << "[" << i << "] " << this->_materia[i]->getType() <<std::endl;
    }
}

void Character::use(int idx, ICharacter& target){

    if(this->_materia[idx])
        this->_materia[idx]->use(target);
    else
        std::cout << "Empty slot, please retry" << std::endl;
}
