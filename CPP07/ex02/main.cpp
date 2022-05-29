/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/12/03 15:35:27 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main()
{
    // TEST LEAK COPY AND ASSIGNMENT
    // {
    // Array <int>*pippo = new Array<int>;
    // Array <int>*ciccio = new Array<int>(*pippo);
    // Array <int>nino;

    // *pippo = nino;
    // *ciccio = nino;

    // delete pippo;
    // delete ciccio;
    // }
    try
    {
        Array <int>ciccio;
        std::cout << ciccio.size() << std::endl;
        Array <int>*pippo = new Array<int>(5);
        (*pippo)[4] = 3;
        std::cout << (*pippo)[4] << std::endl;
        std::cout << pippo->size() << std::endl;
        // (*pippo)[10] = 3;
        delete pippo;
         
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
     
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }