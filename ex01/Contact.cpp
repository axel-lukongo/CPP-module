#include"repertory.hpp"
#include<iostream>

void contact:: creat_contact(void){
	std::string str;

	std::cout<<"enter your first name: ";
	while (std::getline(std::cin, this->user_data[0]) && user_data[0] == "\0")
		std::cout<<"please enter your first name: ";

	std::cout<<"enter your last name: ";
	while (std::getline(std::cin, this->user_data[1]) && user_data[1] == "\0")
		std::cout<<"please enter your last name: ";

	std::cout<<"enter your nick name: ";
	while (std::getline(std::cin, this->user_data[2]) && user_data[2] == "\0")
		std::cout<<"please enter your nick name: ";

	std::cout<<"enter your number: ";
	while (std::getline(std::cin, this->user_data[3]) && user_data[3] == "\0")
		std::cout<<"please enter your number: ";

	std::cout<<"enter your darkest secret: ";
	while (std::getline(std::cin, this->user_data[4]) && user_data[4] == "\0")
		std::cout<<"please enter your darkest secret: ";
}

std::string contact:: data_user(int i)
{
	return (this->user_data[i]);
}