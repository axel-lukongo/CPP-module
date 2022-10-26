/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:19:56 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 16:40:20 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"
#include<iostream>

phonebook::phonebook(void){

	this->index_user = 0;
	return ;

}

phonebook::~phonebook(void){

	return ;
}

void phonebook::edit_user(void){

	contact t1;

	t1.set_contact();
	for (int i = 0; i < 5; i++)
	{
		tab[this->index_user][i] = t1.set_user(i);
	}
	this->index_user++;
	if(this->index_user > 7)
	{
		std::cout<<"[!] number of contact has been reached"<<std::endl;
		this->index_user = 0;
	}
	return ;
}

int phonebook::print_entire_data(void){
	int i;
	std::cout<<"please write the value of the index: ";
	if (std::cin >> i && i >= 0 && i < 8 && this->tab[i][0] != "\0")
	{
		for (int j = 0; j < 5; j++)
			std::cout<<this->tab[i][j]<<std::endl;
		return(1);
	}
	else
		std::cout<<"wrong index"<<std::endl;
	std::cin.clear();
	std::cin.ignore(1024, '\n');
	return(0);
}

void phonebook::print_short_data(void){
	if (this->tab[0][0] == "\0")
		std::cout<<"you must add contact"<<std::endl;
	else
	{
		for(int i = 0; i < 8 && this->tab[i][0] != "\0"; i++)
		{
			std::cout<< std::setw(10) << i << "|";
			for(int y = 0; y < 3; y++)
			{
				if(this->tab[i][y].size() > 9)
					std::cout << this->tab[i][y].substr(0,9);
				else
					std::cout<< std::setw(10) << this->tab[i][y].substr(0,9);
				if(this->tab[i][y].length() > 10)
					std::cout << ".";
				std::cout << "|";
			}
			std::cout << std::endl;
		}
		while (!this->print_entire_data() && !std::cin.eof())
		{
		}
	}
}
