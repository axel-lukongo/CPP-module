/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:29:42 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 14:42:52 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"zombie.hpp"

int main(){
	int N = 4;
	Zombie *horder = zombieHorde(N, "horder");
	for (int i = 0; i < N; i++)
	{
		horder[i].announce();
	}
	delete [] horder;
}