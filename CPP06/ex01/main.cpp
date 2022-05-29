/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 12:08:43 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.h"

uintptr_t serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main()
{
    Data *ulloa = new Data;
    ulloa->age = 26;
    ulloa->name = "Franco";
    ulloa->cap = 70037;
    
    uintptr_t raw = serialize(ulloa);
    std::cout << "ptr of Data " << ulloa << std::endl;
    std::cout << "serialized ptr " << raw << std::endl;
    Data *new_ulloa = deserialize(raw);
    std::cout << "New ptr of Data " << new_ulloa << std::endl;
    std::cout << new_ulloa->age <<  std::endl;
    std::cout << new_ulloa->name <<  std::endl;
    std::cout << new_ulloa->cap <<  std::endl;
    
}