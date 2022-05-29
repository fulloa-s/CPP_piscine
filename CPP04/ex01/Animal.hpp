/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 10:59:58 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class Animal
{
    protected:
    
    std::string type;

    public:

    Animal();
    virtual ~Animal();
    Animal(const Animal &obj);
    Animal& operator =(const Animal &obj);
    std::string getType() const;
    virtual void makeSound() const;
    

};

#endif