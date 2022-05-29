/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:39:42 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 19:10:45 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie *Horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		Horde[i].add_name(name);
	return(Horde);
}