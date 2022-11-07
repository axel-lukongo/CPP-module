/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:18:06 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/07 01:36:08 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FlagTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ScavTrap(n){
	_Hit_point = 100;
	_Energy = 100;
	_Attack = 30;
}

FragTrap::FragTrap(FragTrap & ins):ScavTrap(ins){
	_Hit_point = ins._Hit_point;
	_Energy = ins._Energy;
	_Attack = ins._Attack;
}

FragTrap& FragTrap::operator = (FragTrap & ins){
	_Name = ins._Name;
	_Hit_point = ins._Hit_point;
	_Energy = ins._Energy;
	_Attack = ins._Attack;
	return *this;
}

void FragTrap::highFivesGuys(void){
	std::cout << "high five please" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "FlagTrap destructor has been called" << std::endl;
}