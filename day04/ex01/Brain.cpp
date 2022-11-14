#include "Brain.hpp"


Brain::Brain(){
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain(const Brain & ins)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain & Brain::operator=(const Brain & ins)
{
	std::cout << "Brain assign constructor has been called" << std::endl;
	return *this;
}


Brain::~Brain(){
	std::cout << "Brain destructor has been called" << std::endl;
}

