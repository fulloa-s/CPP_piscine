/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:18:01 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:29:44 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:

    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat& operator =(const WrongCat &obj);
    void makeSound() const;

};

#endif