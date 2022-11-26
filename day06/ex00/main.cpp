/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:50:27 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/26 19:56:23 by alukongo         ###   ########.fr       */
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
	if (type.check_expection())
		type.exec_exception();
	else{
	type.check_char();
	type.choose_type(type.find_type());
	}
}