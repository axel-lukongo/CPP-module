/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:01:35 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/25 16:07:20 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <cctype>

int main(int ac, char **av){
	if(ac <= 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for(int j = 0; j < str.size(); j++)
			{
				std::cout<<(char)std::toupper(str[j]);
			}
		}
	}
	std::cout<<std::endl;
}
