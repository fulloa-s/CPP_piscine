/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:39:47 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/12 14:40:22 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{

}

HumanB::~HumanB()
{
	
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->PTR->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &arma)
{
	this->PTR = &arma;
}