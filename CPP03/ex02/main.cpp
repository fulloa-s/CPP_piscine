/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/16 14:56:35 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap A("Francesco");
    // ScavTrap B("LELLO");
    FragTrap B("Lello");

    A.attack("Lello");
    B.takeDamage(30);
    A.attack("Lello");
    B.takeDamage(30);
    A.beRepaired(10);
    A.highFivesGuys();
    return 0;
}