/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:25:01 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/05 21:05:49 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n):_Name(n){
	_Hit_point = 10;
	_Energy = 10;
	_Attack = 0;
}

ClapTrap::~ClapTrap(void){
	
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
		std::cout << "not anought energy" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount){
	_Hit_point -= amount;
	std::cout << "ClapTrap "<< _Name << " take dammage of " << amount <<" point" << std::endl;
	std::cout << _Name << " Hit point: " << _Hit_point << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_Energy > 0)
	{
		if ((_Hit_point + amount) > 9)
			_Hit_point = 10;
		else
			_Hit_point += amount;
		_Energy -= 1;
		std::cout << "ClapTrap "<< _Name << " repaired " << amount << std::endl;
		std::cout << _Name << " Hit point: " << _Hit_point << std::endl;
		std::cout << _Name << " Energy: " << _Energy << std::endl << std::endl;
	}
	else
		std::cout << "not anought energy" << std::endl;
}
