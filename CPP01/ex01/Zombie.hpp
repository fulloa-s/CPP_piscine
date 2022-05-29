/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:02 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:38 by fulloa-s         ###   ########.fr       */
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
	~Zombie();
	void announce();
	void add_name(std::string name);
};

Zombie	*zombieHorde( int N, std::string name );

#endif