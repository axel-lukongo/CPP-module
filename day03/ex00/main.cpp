/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:41:09 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/05 21:09:01 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap t1("JURO");
	t1.attack("DENJIRO");
	t1.takeDamage(4);
	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.attack("RAZMO");
	t1.attack("RAPIDO");
	t1.beRepaired(1);
	t1.beRepaired(1);
	t1.beRepaired(1);
}