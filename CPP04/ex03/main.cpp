/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 11:39:55 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{

    // {
        // TEST 1 MODIFICA MATERIA SOURCE
        
    // CREAZIONE DELLA MATERIA
    // std::cout << std::endl;
    // AMateria *ghiaccio = new Ice();
    // std::cout << std::endl;
    // AMateria *cura = new Cure();
    // std::cout << std::endl;

    // //COPIA DI MATERIA
    // // *ghiaccio = *cura;
    
    // // CREAZIONE DEL PERSONAGGIO
    // ICharacter *pers = new Character("Franco");
    // std::cout << std::endl;

    
    // // CREAZIONE DELL EQUIP E SHOW
    // pers->equip(ghiaccio);
    // pers->equip(cura);
    // pers->see_equip();

    // // AMATERIA USE e OVERRIDE
    // // ghiaccio->use(*pers);
    // // ghiaccio->AMateria::use(*pers);
    // // cura->use(*pers);
    // // cura->AMateria::use(*pers);
    
    // // CHARACTER USE, USO DELLO SLOT
    // pers->use(0, *pers);
    // pers->use(1, *pers);
    // pers->use(2, *pers);
    // std::cout << std::endl;
    // IMateriaSource *test = new MateriaSource();
    // test->learnMateria(ghiaccio);
    
    // std::cout << std::endl;
    // delete(pers);
    // delete(test);
    // std::cout << std::endl;
    // }
    // std::cout <<"--------------------------------------------" <<  std::endl;
    // std::cout <<"--------------------------------------------" <<  std::endl;
    // std::cout <<"--------------------------------------------" <<  std::endl;
    // std::cout <<"--------------------------------------------" <<  std::endl;
    {
         //TEST 2 - SUBJECT NO LEAK MA PULIZIA NON SICURA
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        return 0;
    }
    // {
        // //TEST 3
    //     std::cout << std::endl;
	// std::cout << "/////////////////////////////////////////" << std::endl;
	// std::cout << std::endl;
	// IMateriaSource* src = new MateriaSource();
	// std::cout << std::endl;
	// src->learnMateria(new Ice());
	// std::cout << std::endl;
	// src->learnMateria(new Cure());
	// std::cout << std::endl;
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// std::cout << std::endl;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// std::cout << std::endl;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// std::cout << std::endl;
	// ICharacter* bob = new Character("bob");
	// std::cout << std::endl;
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(3, *bob);
	// std::cout << std::endl;
	// me->unequip(1);
	// std::cout << std::endl;
	// delete bob;
	// std::cout << std::endl;
	// delete me;
	// std::cout << std::endl;
	// delete src;
	// std::cout << std::endl;
	// std::cout << "/////////////////////////////////////////" << std::endl;
	// std::cout << std::endl;
	// return 0;
    // }
}