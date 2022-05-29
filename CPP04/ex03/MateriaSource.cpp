/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:33:24 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 16:47:53 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    for(int i = 0; i < 4; i++)
        this->memory[i] = NULL;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(){

    for(int i = 0; i < 4; i++)
    {
        if(this->memory[i])
            delete (this->memory[i]);
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj){

    *this = obj;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj){
    
    for(int i = 0; i < 4; i++)
    {
        if(this->memory[i])
            delete (this->memory[i]);
        this->memory[i] = obj.memory[i]->clone();
    }
    return(*this);
}

void MateriaSource::learnMateria(AMateria *obj){

    for(int i = 0; i < 4; i++)
    {
        if(obj == this->memory[i])
            return;
        if(!this->memory[i])
        {
            this->memory[i] = obj;
            //this->memory[i] = obj->clone(); // per potere deletare in modo sicuro ma non si puo dichiarare come nel subject;
            return;
        }
    }
    
}

AMateria* MateriaSource::createMateria(std::string const & type){

    for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] && this->memory[i]->getType() == type)
			return (this->memory[i]->clone());
	}
	return (NULL);
}