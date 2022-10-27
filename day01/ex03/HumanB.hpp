/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:12:44 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/27 15:35:22 by alukongo         ###   ########.fr       */
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
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB(void);
	
};

#endif