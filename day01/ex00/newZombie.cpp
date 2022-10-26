/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:18:19 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/25 18:20:13 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie* other_zombie = new Zombie(name);
	return(other_zombie);
}
