/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:54 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/10 19:02:57 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
// #include "ClapTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap(){
	_name = "Default DiamondTrap";
	_Hit_point = 100;
	_Energy = 50;
	_Attack = 30;
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name):_name(name), ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(){
	_Hit_point = 100;
	_Energy = 50;
	_Attack = 30;
	std::cout << "DiamondTrap constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & ins){
	*this = ins;
	std::cout << "DiamondTrap copy constructor has been called" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap & ins){
	*this = ins;
	return(*this);
	std::cout << "DiamondTrap assign constructor has been called" << std::endl;
}


DiamondTrap::~DiamondTrap(void){
	std::cout << "destructor has been called" << std::endl;
}



void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "i'm " << this->_name << " and my ClapTrap is " << ClapTrap::_Name << std::endl << std::endl;
}
