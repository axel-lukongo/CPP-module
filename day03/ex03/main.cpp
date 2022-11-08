/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:41:09 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/08 19:00:41 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	DiamondTrap t1("JURO");
	t1.attack("DENJIRO");
	t1.takeDamage(40);
	t1.takeDamage(40);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.takeDamage(25);
	t1.takeDamage(1);
	t1.whoAmI();
	// t1.guardGate();
	// t1.attack("RAZMO");
	// t1.attack("RAPIDO");
	t1.beRepaired(1);
	t1.beRepaired(1);
}
