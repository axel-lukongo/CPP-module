/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:51:46 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/31 20:31:31 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	return ;
}

Harl::~Harl(void){
	return ;
}

int Harl::get_level( std::string level ){
	void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string param[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (param[i] == level)
			return (i);
	}
	std::cout << "function '"<< level << "' not found" <<std::endl;
	return(-1);
}

void Harl::debug( void ){
	std::cout << "\033[1;33mDEBUG:\n\033[0m: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::info( void ){
	std::cout <<"\033[1;32mINFO:\n\033[0m: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<< std::endl;
}

void Harl::warning( void ){
	std::cout <<"\033[1;34mWARNING:\n\033[0m: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
	
}

void Harl::error( void ){
	std::cout <<"\033[1;31mERROR:\n\033[0m: This is unacceptable ! I want to speak to the manager now."<< std::endl;
}

void Harl::complain( std::string level ){
	int lvl = get_level(level);
	switch(lvl){
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
	}
}