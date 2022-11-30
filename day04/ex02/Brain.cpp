#include "Brain.hpp"


Brain::Brain(){
	std::cout << "Brain default constructor has been called" << std::endl;
	// for (int i =0; i < 100; i++)
		// ideas[i] = "ideas";
}

Brain::Brain(const Brain & ins)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
	*this = ins;
}

Brain & Brain::operator=(const Brain & ins)
{
	std::cout << "Brain assign constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = ins.ideas[i];
	return *this;
}


void Brain::set_ideas(){
	for(int i = 0; i < 99; i++)
		ideas[i] = " ideas ";
}


// std::ostream &operator<<(std::ostream &out, const Brain &brain) {
// 	out << "[ ";
// 	for(int i = 0; i < 100; ++i) {
// 		out << brain.ideas[i];
// 	}
// 	out << " ]" << std::endl;
// 	return out;
// }

Brain::~Brain(){
	std::cout << "Brain destructor has been called" << std::endl;
}

