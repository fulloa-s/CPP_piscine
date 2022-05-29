/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:39:47 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/12 12:58:19 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arma) : REF(arma), name(name)
{

}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->REF.getType() << std::endl;
}