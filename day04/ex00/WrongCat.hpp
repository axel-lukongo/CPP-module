#ifndef WrongCat_H
#define WrongCat_H
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(std::string);
		WrongCat(const WrongCat & ins);
		WrongCat & operator=(const WrongCat & ins);
		void makeSound() const;
		const std::string & getType() const;
		virtual ~WrongCat();
};
#endif // !WrongAnimal_H