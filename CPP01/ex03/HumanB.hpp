/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:34:55 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:51 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <new>

class HumanB
{
	Weapon		*PTR;
	std::string	name;
	
	public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &arma);
};



#endif