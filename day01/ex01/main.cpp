/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:29:42 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 13:08:00 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"

int main(){
	Zombie *horder = zombieHorde(3, "horder");
	horder[0].announce();
	delete [] horder;
}