/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:20:41 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 16:21:17 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"
#include<iostream>

int main()
{
	std::string data;
	phonebook t1;
	std::cout<<"*****the program start !*****"<<std::endl;
	while (std::getline(std::cin, data) && data != "EXIT" && !std::cin.eof())
	{
		if (data == "ADD")
			t1.edit_user();
		if (data == "SEARCH")
			t1.print_short_data();
	}
	return 0;
}
