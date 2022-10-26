/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:18:14 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/25 18:19:09 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"

void randomChump( std::string name ){
	Zombie mob(name);
	mob.announce();
}
