/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:34:55 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:48 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <new>

class HumanA
{
	Weapon		&REF;
	std::string	name;
	
	public:
	HumanA(std::string name, Weapon &arma);
	~HumanA();
	void attack();
};



#endif