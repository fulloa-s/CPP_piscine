/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:03:57 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 10:35:31 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void ft_toDouble(std::string &buffer)
{
    double d = atof(buffer.c_str());
    if (d == 0 && buffer != "0.0")
        throw std::runtime_error("Please enter a number within the bounds of the type. Strings are not accepted");
    
    // std::cout << "DEBUG " << f <<std::endl;
    // std::cout << "DEBUG " << static_cast<long long int>(d) <<std::endl;
    long long int c = static_cast<long long int>(d);
   if (c >= 32 && c <= 126)
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    else if(c == 127 || (c >= 0 && c <= 31))
        std::cout << "char: Non displayable"<< std::endl;
    else
        std::cout << "char: impossible"<< std::endl;
    if(static_cast<long long int>(d) < std::numeric_limits<int>::min() || static_cast<long long int>(d) > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
    {
        int i = static_cast<int>(d);
        std::cout << "int: " << i << std::endl;
    }
    float f = static_cast<float>(d);
    if((f - static_cast<long int>(f)) == 0)
        std::cout << "float: " << f << ".0f" << std::endl;
    else
        std::cout << "float: " << f << "f" <<  std::endl;
    if((d - static_cast<long int>(d)) == 0)
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;   
}

void ft_toFloat(std::string &buffer)
{
    float f = atof(buffer.c_str());
    if (f == 0 && buffer != "0.0f")
        throw std::runtime_error("Please enter a number within the bounds of the type. Strings are not accepted");
    
    // std::cout << "DEBUG " << f <<std::endl;
    // std::cout << "DEBUG " << static_cast<long long int>(f) <<std::endl;
    long long int c = static_cast<long long int>(f);
   if (c >= 32 && c <= 126)
        std::cout << "char: " << static_cast<char>(c) << std::endl;
    else if(c == 127 || (c >= 0 && c <= 31))
        std::cout << "char: Non displayable"<< std::endl;
    else
        std::cout << "char: impossible"<< std::endl;
    if(static_cast<long long int>(f) <= std::numeric_limits<int>::min() || static_cast<long long int>(f) > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
    {
        int i = static_cast<int>(f);
        std::cout << "int: " << i << std::endl;
    }
    if((f - static_cast<long int>(f)) == 0)
        std::cout << "float: " << f << ".0f" << std::endl;
    else
        std::cout << "float: " << f << "f" <<  std::endl;
    double d = static_cast<double>(f);
    if((d - static_cast<long int>(d)) == 0)
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;   
}

void ft_toInt(std::string &buffer)
{
    long long int li = atoll(buffer.c_str());
    if (li == 0 && buffer != "0")
        throw std::runtime_error("Please enter a number within the bounds of the type. Strings are not accepted");
    int i = static_cast<int>(li);
    
    if(li < std::numeric_limits<int>::min() || li > std::numeric_limits<int>::max())
        throw std::runtime_error("Integer Limit Error!");
    if (i >= 32 && i <= 126)
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    else if(i == 127 || (i >= 0 && i <= 31))
        std::cout << "char: Non displayable"<< std::endl;
    else
        std::cout << "char: impossible"<< std::endl;
    std::cout << "int: " << i << std::endl;
    float f = static_cast<float>(i);
    std::cout << "float: " << f << ".0f" << std::endl;
    double d = static_cast<double>(i);
    std::cout << "double: " << d << ".0" << std::endl;
}

void ft_toChar(std::string &buffer)
{
    char c = static_cast<char>(buffer[0]);
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    if (c >= 32 && c <= 126)
        std::cout << "char: " << c << std::endl;
    else if(c == 127 || (c >= 0 && c <= 31))
        std::cout << "char: Non displayable"<< std::endl;
    else
        std::cout << "char: impossible"<< std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}



void ft_detectType(std::string &buffer){

    size_t len = buffer.size();

    if(buffer.size() == 1 && (buffer[0] < 48 || buffer[0] > 57))
        ft_toChar(buffer);
    else if(buffer.find('.') == std::string::npos && buffer.find('n') == std::string::npos && buffer.find('f') == std::string::npos)
        ft_toInt(buffer);
    else if(buffer[len - 1] == 'f' && buffer != "+inf" && buffer != "-inf" && buffer != "inf" && buffer != "nan")
        ft_toFloat(buffer);
    else
        ft_toDouble(buffer);
}