/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:02 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 17:25:38 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <new>

class Zombie
{
	std::string name;

	public:
	
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
};

Zombie	*newZombie(std::string name);
void 	randomChump(std::string name);

#endif