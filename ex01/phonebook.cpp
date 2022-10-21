#include"repertory.hpp"
#include<iostream>

phonebook::phonebook(void){

	this->index_user = 0;
	std::cout<<"the constructor has been called"<<std::endl;
	return ;

}

phonebook::~phonebook(void){

	std::cout<<"the destructor has been called"<<std::endl;
	return ;

}

void phonebook::edit_user(void){

	contact t1;

	t1.creat_contact();
	for (int i = 0; i < 5; i++)
	{
		tab[this->index_user][i] = t1.data_user(i);
	}
	this->index_user++;
	if(this->index_user > 7)
		this->index_user = 0;
	std::cout<<"edit_user is called"<< std::endl;
	return ;
}

void phonebook::print_data(void){

	for(int i = 0; i < 8 && this->tab[i][0] != "\0"; i++)
	{
		std::cout<<"         "<<i<<"|";
		std::cout<<"         "<<this->tab[i][0] <<"|";
		std::cout<<"         "<<this->tab[i][1] <<"|";
		std::cout<<"         "<<this->tab[i][2] <<"|"<<std::endl;
	}
}