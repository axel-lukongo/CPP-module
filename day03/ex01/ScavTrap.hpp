/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:09:27 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/07 21:40:36 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScaveTrap_H
#define ScaveTrap_H

#include<iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string n);
		ScavTrap(ScavTrap & ins );
		ScavTrap & operator = (ScavTrap & ins );
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif // !ScaveTrap_H