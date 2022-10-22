#include"repertory.hpp"
#include<iostream>

phonebook::phonebook(void){

	this->index_user = 0;
	std::cout<<"the constructor has been called"<<std::endl;
	return ;

}

phonebook::~phonebook(void){

	std::cout<<"the destructor has been called"<<std::endl;
	// return ;

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
			for(int y = 0; y < 4; y++)
			{
				std::cout<< std::setw(10) << this->tab[i][y].substr(0,9);
				if(this->tab[i][y].length() > 10)
					std::cout << ".";
				std::cout << "|";
			}
			std::cout << std::endl;
		}
		while (!this->print_entire_data())
		{
		}
	}
}
