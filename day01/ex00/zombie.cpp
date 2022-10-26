#include "zombie.hpp"

Zombie::Zombie(std::string n) : _name(n){
	// std::cout<<"constructor is call"<<std::endl;
}

Zombie::~Zombie(void){
	// std::cout<<"desctructor is call"<<std::endl;
}

void Zombie::announce(void){
	std::cout<< this->_name + " : BraiiiiiiinnnzzzZ"<<std::endl;
}