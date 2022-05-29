/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:17:50 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 12:00:20 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#   ifndef SERIALIZATION_H
# define SERIALIZATION_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include <limits.h>

typedef struct s_data{
    
    unsigned int age;
    std::string name;
    unsigned int  cap;
    
} Data;



#endif