/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:33:45 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/27 02:03:32 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon){
	
};

HumanA::~HumanA(void){
	
};

void HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType();
	std::cout << std::endl;
}