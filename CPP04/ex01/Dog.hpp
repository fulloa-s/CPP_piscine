/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:53:31 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 17:51:58 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    
    Brain *_brain;
    
    public:

    Dog();
    ~Dog();
    Dog(const Dog &obj);
    Dog& operator =(const Dog &obj);
    void makeSound() const;
    void three_idea();

};

#endif