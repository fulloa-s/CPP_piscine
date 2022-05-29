/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:09:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 16:31:10 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap(){

	std::cout << "Oh no! ScavTrap " << this->_name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
	
	(*this) = obj;
	std::cout << "ScavTrap " << this->_name << " has been cloned!" << std::endl;
}

ScavTrap    &ScavTrap::operator = (const ScavTrap &obj){

	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	std::cout << "ScavTrap " << this->_name << " used assignation overload!" << std::endl;
	return (*this);
}

void    ScavTrap::attack(std::string const &target) {

	 std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(){

	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode " << std::endl;
}