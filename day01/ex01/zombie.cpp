#include "zombie.hpp"

Zombie::Zombie(void){
	// std::cout<<"constructor is call"<<std::endl;
}

Zombie::~Zombie(void){
	// std::cout<<"desctructor is call"<<std::endl;
}

void Zombie::announce(void){
	std::cout<< this->_name + " : BraiiiiiiinnnzzzZ"<<std::endl;
}

void Zombie:: set_name(std::string n){
	this->_name = n;
}
