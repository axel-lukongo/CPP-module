
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"

WrongDog::WrongDog(){
	std::cout << "WrongDog default constructor has been called" << std::endl;
	_type = "WrongDog";
}

WrongDog::WrongDog(std::string n){
	std::cout << "WrongDog constructor has been called" << std::endl;
	_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog & ins)
{
	std::cout << "WrongDog copy constructor has been called" << std::endl;
	*this = ins;
}

WrongDog & WrongDog::operator=(const WrongDog & ins)
{
	std::cout << "WrongDog assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	_type = ins._type;
	return *this;
}


WrongDog::~WrongDog(){
	std::cout << "WrongDog destructor has been called" << std::endl;
}



void WrongDog:: makeSound() const{
	std::cout << "wouf wouf" << std::endl << std::endl;
}

const std::string & WrongDog::getType() const{
	return(_type);
}