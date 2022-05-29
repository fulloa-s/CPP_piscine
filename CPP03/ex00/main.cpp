/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:13:01 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("Francesco");
    ClapTrap B("Lello");

    A.attack("Lello");
    B.takeDamage(0);
    A.attack("Lello");
    B.takeDamage(0);
    A.beRepaired(10);
    
    return 0;
}