/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:19:34 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/12 12:08:18 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->_type = weapon;
}

Weapon::~Weapon()
{
	
}

void	Weapon::setType(std::string weapon)
{
	this->_type = weapon;
}

const std::string &Weapon::getType()
{
	const std::string &ref = this->_type;

	return (ref);
}