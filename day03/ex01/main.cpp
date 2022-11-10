/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:41:09 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/10 18:49:10 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ScavTrap t1("JURO");
	t1.attack("DENJIRO");
	t1.takeDamage(40);
	t1.takeDamage(40);
	t1.beRepaired(40);
	t1.attack("DENJIRO");
}