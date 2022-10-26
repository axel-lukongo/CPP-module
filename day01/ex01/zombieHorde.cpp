/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:30:08 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 14:45:23 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
	}
	return(horde);
}