/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:59:10 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 13:01:46 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CURE_H
# define CURE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:

    Cure();
    ~Cure();
    Cure(const Cure &obj);
    Cure& operator =(const Cure &obj);
    std::string const &getType() const;
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif