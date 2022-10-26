/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:50:19 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 15:04:01 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "l'adresse de str est: "<< &str << std::endl;
	std::cout << "l'adresse du ptr est: "<< stringPTR << std::endl;
	std::cout << "l'adresse de la REF est: "<< &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "valeur de str est: "<< str << std::endl;
	std::cout << "valeur du ptr est: "<< *stringPTR << std::endl;
	std::cout << "valeur de la REF est: "<< stringREF << std::endl;
}
