/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:51:46 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/31 19:56:27 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	return ;
}

Harl::~Harl(void){
	return ;
}

void Harl::complain( std::string level ){
	void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string param[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (param[i] == level)
		{
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "function '"<< level << "' not found" <<std::endl;
}

void Harl::debug( void ){
	std::cout << "\033[1;33mdebug\033[0m: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::info( void ){
	std::cout <<"\033[1;32minfo\033[0m: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<< std::endl;
}

void Harl::warning( void ){
	std::cout <<"\033[1;34mwarning\033[0m: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
	
}

void Harl::error( void ){
	std::cout <<"\033[1;31merror\033[0m: This is unacceptable ! I want to speak to the manager now."<< std::endl;
}
