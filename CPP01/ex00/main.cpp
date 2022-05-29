/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:44 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 17:57:37 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("random");
	
	Zombie *heap = newZombie("newZombie");
	heap->announce();
	delete(heap);

	Zombie stack("Zombie");
	stack.announce();
}

