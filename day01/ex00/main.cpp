/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:06:55 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/25 18:29:57 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"

int main(void){
	Zombie first("zombie_one");
	first.announce();

	randomChump("random zombie");

	Zombie *third = newZombie("dinamyque zombie");
	third->announce();

	delete third;
}
