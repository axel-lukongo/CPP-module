#include "Brain.hpp"


Brain::Brain(){
	std::cout << "Brain default constructor has been called" << std::endl;
	for (int i =0; i < 100; i++)
		ideas[i] = "im in the brain";
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

std::ostream &operator<<(std::ostream &out, const Brain &brain) {
	out << "[ ";
	for(int i = 0; i < 100; ++i) {
		out << brain.ideas[i] << " ,";
	}
	out << " ]" << std::endl;
	return out;
}

Brain::~Brain(){
	std::cout << "Brain destructor has been called" << std::endl;
}

