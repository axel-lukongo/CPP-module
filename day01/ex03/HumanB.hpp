/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:12:44 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/27 01:46:17 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include<iostream>
#include"Weapon.hpp"
// #include<iomanip>

class HumanB{
	private:
		std::string _name;
		Weapon * _weapon;
	public:
		void attack();
		void setWeapon(Weapon arme);
		HumanB(std::string arme);
		~HumanB(void);
	
};

#endif