/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:50:27 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/22 01:09:22 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"



int main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "invalid number of argument" << std::endl;
		return (1);
	}
	converter type(av[1]);
	type.typeconverter();
}