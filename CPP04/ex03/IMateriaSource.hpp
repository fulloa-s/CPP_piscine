/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:31:23 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 15:15:26 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "AMateria.hpp"


class IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *obj) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif