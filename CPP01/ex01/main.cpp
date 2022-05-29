/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:44 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 19:11:51 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Horde = zombieHorde(5, "ciccio");
	Horde[0].announce();
	Horde[3].announce();
	delete []Horde;
}

