/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:59:10 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 13:00:48 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:

    Ice();
    ~Ice();
    Ice(const Ice &obj);
    Ice& operator =(const Ice &obj);
    std::string const &getType() const;
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif