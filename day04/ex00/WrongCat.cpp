
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor has been called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(std::string n){
	(void) n;
	std::cout << "WrongCat constructor has been called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & ins)
{
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = ins;
}

WrongCat & WrongCat::operator=(const WrongCat & ins)
{
	std::cout << "WrongCat assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	_type = ins._type;
	return *this;
}


WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor has been called" << std::endl;
}


void WrongCat:: makeSound() const{
	std::cout << "miiiaouuu" << std::endl << std::endl;
}


const std::string & WrongCat::getType() const{
	// std::cout << "copy constructor has been called" <<std::endl;
	return(_type);
}
