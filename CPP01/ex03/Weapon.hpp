/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:02 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:54 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
#include <iomanip>
#include <new>

class Weapon
{
	std::string _type;

	public:

	Weapon(std::string weapon);
	~Weapon();
	void	setType(std::string weapon);
	const	std::string &getType();
	
};

#endif