/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:25:01 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/07 01:10:19 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n):_Name(n){
	std::cout << "ClapTrap constructor has been called" << std::endl;
	_Hit_point = 100;
	_Energy = 50;
	_Attack = 20;
}

ClapTrap::ClapTrap(ClapTrap & ins){
	_Name = ins.get_name();
	_Hit_point = ins._Hit_point;
	_Energy = ins._Energy;
	_Attack = ins._Attack;
}

ClapTrap& ClapTrap::operator=(ClapTrap & ins){
	_Name = ins.get_name();
	_Hit_point = ins._Hit_point;
	_Energy = ins._Energy;
	_Attack = ins._Attack;
	return(*this);
}


ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (_Energy > 0)
	{
		std::cout << "ClapTrap " << _Name << " attack " << target << " causin " << _Attack << " point of dammage !"<< std::endl;
		std::cout << _Name << " Hit point: " << _Hit_point << std::endl;
		_Energy -= 1;
		std::cout << _Name << " Energy: " << _Energy << std::endl << std::endl;
	}
	else
		std::cout << "not anought energy" << std::endl<< std::endl;
}


void ClapTrap::takeDamage(unsigned int amount){
	if (_Hit_point > 0){
		_Hit_point -= amount;
		std::cout << _Name << " take dammage of " << amount <<" point" << std::endl;
		std::cout << _Name << " Hit point: " << _Hit_point << std::endl << std::endl;
	}
	else
		std:: cout << _Name << " is already dead" << std::endl<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_Energy > 0 && _Hit_point > 0)
	{
		if ((_Hit_point + amount) > 99)
			_Hit_point = 100;
		else
			_Hit_point += amount;
		_Energy -= 1;
		std::cout << _Name << " repaired " << amount << std::endl;
		std::cout << _Name << " Hit point: " << _Hit_point << std::endl;
		std::cout << _Name << " Energy: " << _Energy << std::endl << std::endl;
	}
	else if (_Energy <= 0)
		std::cout << "not anought energy" << std::endl<< std::endl;
	else
		std::cout << "you are Dead" << std::endl<< std::endl;
}



std::string ClapTrap::get_name(void){
	return (_Name);
}
