/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:04:42 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/23 15:14:39 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

int main()
{
	{
		int	tab[5] = {0, 1, 2, 3, 4};
		iter(tab, 5, &ft_print);
		std::cout << std::endl << std::endl;
	}
	{
		std::string	tab[5] = {"je", "suis", "entrain", "de", "tester"};
		iter(tab, 5, &ft_print);
		std::cout << std::endl << std::endl;
	}
	{
		double	tab[5] = {0.4, 4.2, 5.2, 2.2, 1.1};
		iter(tab, 5, &ft_print);
		std::cout << std::endl << std::endl;
	}
	{
		float	tab[5] = {0.30f, 4.2f, 5.2f, 2.2f, 1.1f};
		iter(tab, 5, &ft_print);
		std::cout << std::endl << std::endl;
	}
}