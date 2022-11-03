/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:29:04 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/31 20:24:22 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
	Harl test;

	test.complain("info");
	std::cout<<std::endl;

	test.complain("warning");
	std::cout<<std::endl;

	test.complain("error");
	std::cout<<std::endl;

	test.complain("debug");
	std::cout<<std::endl;

	test.complain("WRONG");
	std::cout<<std::endl;

	test.complain("");
	std::cout<<std::endl;

}